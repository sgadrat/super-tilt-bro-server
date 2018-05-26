#pragma once

#include <memory>
#include <mutex>
#include <deque>

template <typename T>
class ThreadSafeFifo {
public:
	ThreadSafeFifo(uint32_t bufferLength);
	void push(std::shared_ptr<T> e);
	std::shared_ptr<T> pop();

private:
	std::deque<std::shared_ptr<T>> mBuffer;
	uint32_t mBufferMaxSize;
	std::mutex mBufferLock;
};

template <typename T>
ThreadSafeFifo<T>::ThreadSafeFifo(uint32_t bufferLength)
: mBufferMaxSize(bufferLength)
{
}

template <typename T>
void ThreadSafeFifo<T>::push(std::shared_ptr<T> e) {
	std::lock_guard<std::mutex> guard(mBufferLock);
	if (mBuffer.size() >= mBufferMaxSize) {
		throw std::runtime_error("ThreadSafeFifo pushed while full");
	}

	mBuffer.push_back(e);
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
