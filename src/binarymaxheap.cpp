/*
 * BinaryMaxHeap.cpp
 *
 *  Created on: Oct 9, 2016
 *      Author: derek
 */

#include "binarymaxheap.hpp"

void BinaryMaxHeap::heapify() {
	int i = heap.size()-1;
	int p = i/2;

	while (i > 0 && heap[i] > heap[p]) {
		swap(i, p);

		i = p;
		p = i/2;
	}
}

void BinaryMaxHeap::heapify_down() {
	if (heap.size() == 2 && heap[0] < heap[1]) {
		swap(0, 1);
		return;
	}
	//heap has at least 3 elements
	uint p = 0, c, c1 = 1, c2 = 2;
	if (heap[c1] > heap[c2]) {
		c = c1;
	} else {
		c = c2;
	}

	while (c < heap.size() && heap[p] < heap[c]) {
		swap(p, c);

		p = c;
		c1 = 2*p + 1;
		c2 = 2*p + 2;
		if (heap.size() > c2) {
			if (heap[c1] > heap[c2]) {
				c = c1;
			} else {
				c = c2;
			}
		} else if (heap.size() > c1) {
			c = c1;
		} else {
			return;
		}
	}
}
