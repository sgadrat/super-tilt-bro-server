#define BOOST_TEST_MODULE utils
#include <boost/test/included/unit_test.hpp>

#include <utils.hpp>

#include <stdexcept>

// Waiting for a build system: g++ src_utils.cpp -I ../src

BOOST_AUTO_TEST_CASE(ThreadSafeFifo_SingleThread) {
	// Create a fifo
	ThreadSafeFifo<int> fifo(5);

	// Fill the fifo
	std::shared_ptr<int> p(new int(1));
	fifo.push(p);
	p.reset(new int(2));
	fifo.push(p);
	p.reset(new int(3));
	fifo.push(p);
	p.reset(new int(4));
	fifo.push(p);
	p.reset(new int(5));
	fifo.push(p);

	// Try to push an element while full
	p.reset(new int(6));
	BOOST_REQUIRE_THROW(fifo.push(p), std::runtime_error);

	// Get pushed elements
	p = fifo.pop();
	BOOST_CHECK_EQUAL(*p, 1);
	p = fifo.pop();
	BOOST_CHECK_EQUAL(*p, 2);
	p = fifo.pop();
	BOOST_CHECK_EQUAL(*p, 3);
	p = fifo.pop();
	BOOST_CHECK_EQUAL(*p, 4);
	p = fifo.pop();
	BOOST_CHECK_EQUAL(*p, 5);

	// Try to pop an element while empty
	BOOST_REQUIRE_THROW(fifo.pop(), std::runtime_error);
}
