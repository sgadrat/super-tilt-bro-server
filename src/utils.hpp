#pragma once

#include <chrono>
#include <condition_variable>
#include <deque>
#include <memory>
#include <mutex>
#include <thread>

template <typename T>
class ThreadSafeFifo {
public:
	ThreadSafeFifo(uint32_t bufferLength);
	void push(std::shared_ptr<T> e);
	std::shared_ptr<T> pop();
	std::shared_ptr<T> pop_block();
	std::shared_ptr<T> pop_block(std::chrono::microseconds timeout);

private:
	std::deque<std::shared_ptr<T>> mBuffer;
	uint32_t mBufferMaxSize;
	std::mutex mBufferLock;
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
std::shared_ptr<T> ThreadSafeFifo<T>::pop_block(std::chrono::microseconds /*timeout*/) {
	//TODO Actual implementation (this one ingores timeout)
	return this->pop_block();
}
