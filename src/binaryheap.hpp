/*
 * binaryheap.hpp
 *
 *  Created on: Oct 9, 2016
 *      Author: derek
 */

#ifndef SRC_BINARYHEAP_HPP_
#define SRC_BINARYHEAP_HPP_

#include <vector>
#include <string>

class BinaryHeap {
	void do_insert(int);
	int do_extract();
protected:
	std::vector<int> heap;
	void swap(int, int);
	virtual void heapify()=0;
	virtual void heapify_down()=0;
public:
	BinaryHeap();
	BinaryHeap(int);
	virtual ~BinaryHeap();
	void insert(int);
	int extract();
	std::string traverse();
};

#endif /* SRC_BINARYHEAP_HPP_ */
