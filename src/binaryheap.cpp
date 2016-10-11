/*
 * binaryheap.cpp
 *
 *  Created on: Oct 9, 2016
 *      Author: derek
 */

#include <iterator>
#include "binaryheap.hpp"

BinaryHeap::BinaryHeap() {

}

BinaryHeap::BinaryHeap(int a) {
	heap.push_back(a);
}

BinaryHeap::~BinaryHeap() {

}

void BinaryHeap::swap(int i1, int i2) {
	int t = heap[i1];
	heap[i1] = heap[i2];
	heap[i2] = t;
}

void BinaryHeap::insert(int value) {
	do_insert(value);
}

void BinaryHeap::do_insert(int value) {
	heap.push_back(value);
	heapify();
}

int BinaryHeap::extract() {
	return do_extract();
}

int BinaryHeap::do_extract() {
	if (heap.size() == 0) {
		return -1;
	}
	int front = heap.front();
	heap[0] = heap.back();
	heap.pop_back();
	if (heap.size() > 1) {
		heapify_down();
	}
	return front;
}

std::string BinaryHeap::traverse() {
	std::string s = "[";
	std::vector<int>::iterator it;
	for (int v : heap) {
		s += std::to_string(v) + ',';
	}
	if (s.length() == 1) {
		s += ']';
	} else {
		s[s.length()-1] = ']';
	}
	return s;

}
