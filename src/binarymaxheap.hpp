/*
 * BinaryMaxHeap.hpp
 *
 *  Created on: Oct 9, 2016
 *      Author: derek
 */

#ifndef SRC_BINARYMAXHEAP_HPP_
#define SRC_BINARYMAXHEAP_HPP_

#include "binaryheap.hpp"

class BinaryMaxHeap : public BinaryHeap {
	void heapify();
	void heapify_down();
};


#endif /* SRC_BINARYMAXHEAP_HPP_ */
