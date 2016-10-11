/*
 * BinaryMinHeap.hpp
 *
 *  Created on: Oct 9, 2016
 *      Author: derek
 */

#ifndef SRC_BINARYMINHEAP_HPP_
#define SRC_BINARYMINHEAP_HPP_

#include "binaryheap.hpp"

class BinaryMinHeap : public BinaryHeap {
	void heapify();
		void heapify_down();
};


#endif /* SRC_BINARYMINHEAP_HPP_ */
