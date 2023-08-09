#pragma once

#include <algorithm>
#include <chrono>
#include <condition_variable>
#include <deque>
#include <locale.h>
#include <stdexcept>
#include <string.h>
#include <memory>
#include <mutex>
#include <thread>

//
// Single ease of use functions
//

/**
 * @brief Easier remove_if
 * @param container A container that can be iterated on
 * @param predicate A callable determining if an element must be removed
 *
 * predicate is called once per element, with the element as single parameter.
 * predicate shall returns true for elements that have to be removed.
 */
template<typename T, typename P>
void prune_if(T& container, P predicate) {
	container.erase(
		std::remove_if(
			container.begin(),
			container.end(),
			predicate
		),
		container.end()
	);
}

/** Thread-safe version of strerror */
inline char const* strerror_tf(int err) {
	// Note: avoid using strerror_r, because smart folks at GNU and smart people from POSIX came with the same name for different functions

	static locale_t locale = newlocale(LC_ALL_MASK, "", (locale_t)0);

    if (locale == (locale_t)0) {
       return "bad locale";
    }
    return strerror_l(err, locale);
}

//
// Thread safe FIFOs
//

template <typename T>
class ThreadSafeFifo {
public:
	ThreadSafeFifo(uint32_t bufferLength);
	void push(std::shared_ptr<T> e);
	std::shared_ptr<T> pop();
	std::shared_ptr<T> pop_block();
	template <typename Rep, typename Period>
	std::shared_ptr<T> pop_block(std::chrono::duration<Rep, Period> timeout);
	bool empty() const;

private:
	std::deque<std::shared_ptr<T>> mBuffer;
	uint32_t mBufferMaxSize;
	mutable std::mutex mBufferLock;
	std::condition_variable mCondition;
};

template <typename T>
ThreadSafeFifo<T>::ThreadSafeFifo(uint32_t bufferLength)
: mBufferMaxSize(bufferLength)
{
}

template <typename T>
void ThreadSafeFifo<T>::push(std::shared_ptr<T> e) {
	{
		std::lock_guard<std::mutex> guard(mBufferLock);
		if (mBuffer.size() >= mBufferMaxSize) {
			throw std::runtime_error("ThreadSafeFifo pushed while full");
		}

		mBuffer.push_back(e);
	}
	mCondition.notify_all(); // Note: could be notify_one, but would require pop() functions to re-notify if there is still some elements in queue
}

template <typename T>
std::shared_ptr<T> ThreadSafeFifo<T>::pop() {
	std::lock_guard<std::mutex> guard(mBufferLock);
	if (mBuffer.size() == 0) {
		throw std::runtime_error("ThreadSafeFifo poped while empty");
	}

	std::shared_ptr<T> e = mBuffer.front();
	mBuffer.pop_front();
	return e;
}

template <typename T>
std::shared_ptr<T> ThreadSafeFifo<T>::pop_block() {
	std::unique_lock<std::mutex> lock(mBufferLock);
	while (mBuffer.size() == 0) {
		mCondition.wait(lock);
	}

	std::shared_ptr<T> e = mBuffer.front();
	mBuffer.pop_front();
	return e;
}

template <typename T>
template <typename Rep, typename Period>
std::shared_ptr<T> ThreadSafeFifo<T>::pop_block(std::chrono::duration<Rep, Period> timeout) {
	std::unique_lock<std::mutex> lock(mBufferLock);
	if (mBuffer.size() == 0) {
		mCondition.wait_for(lock, timeout);
	}
	if (mBuffer.size() == 0) {
		throw std::runtime_error("ThreadSafeFifo pop timed out");
	}

	std::shared_ptr<T> e = mBuffer.front();
	mBuffer.pop_front();
	return e;
}

template <typename T>
bool ThreadSafeFifo<T>::empty() const {
	std::lock_guard<std::mutex> lock(mBufferLock);
	return mBuffer.size() == 0;
}
