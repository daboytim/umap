/*
 * test.cpp
 *
 *  Created on: Sep 25, 2016
 *      Author: derek
 */

#include "binarysearchtree.hpp"
#include "binaryminheap.hpp"
#include "binarymaxheap.hpp"
#include <iostream>

void testBSTree() {
	std::cout << "Test BinarySearchTree:" << std::endl;
	BinarySearchTree bt;
	std::cout << bt.traverse() << std::endl;
	bt.insert(5);
	std::cout << bt.traverse() << std::endl;
	bt.insert(3);
	std::cout << bt.traverse() << std::endl;
	bt.insert(8);
	std::cout << bt.traverse() << std::endl;
	bt.insert(4);
	std::cout << bt.traverse() << std::endl;
	bt.insert(9);
	std::cout << bt.traverse() << std::endl;
	bt.insert(9);
	std::cout << bt.traverse() << std::endl;

	std::cout << bt.contains(4) << std::endl;
	std::cout << bt.contains(7) << std::endl;

	bt.clear();
	std::cout << bt.traverse() << std::endl;

	bt.insert(1);
	std::cout << bt.traverse() << std::endl;
	std::cout << std::endl;
}

void testMaxHeap() {
	std::cout << "Test BinaryMaxHeap:" << std::endl;
	BinaryMaxHeap bt;
	std::cout << bt.traverse() << std::endl;
	bt.insert(5);
	std::cout << bt.traverse() << std::endl;
	bt.insert(3);
	std::cout << bt.traverse() << std::endl;
	bt.insert(8);
	std::cout << bt.traverse() << std::endl;
	bt.insert(4);
	std::cout << bt.traverse() << std::endl;
	bt.insert(9);
	std::cout << bt.traverse() << std::endl;
	bt.insert(9);
	std::cout << bt.traverse() << std::endl;

	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	bt.insert(1);
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << std::endl;
}

void testMinHeap() {
	std::cout << "Test BinaryMinHeap:" << std::endl;
	BinaryMinHeap bt;
	std::cout << bt.traverse() << std::endl;
	bt.insert(5);
	std::cout << bt.traverse() << std::endl;
	bt.insert(3);
	std::cout << bt.traverse() << std::endl;
	bt.insert(8);
	std::cout << bt.traverse() << std::endl;
	bt.insert(4);
	std::cout << bt.traverse() << std::endl;
	bt.insert(9);
	std::cout << bt.traverse() << std::endl;
	bt.insert(9);
	std::cout << bt.traverse() << std::endl;

	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	bt.insert(1);
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << bt.extract() << std::endl;
	std::cout << bt.traverse() << std::endl;
	std::cout << std::endl;
}

int main(int argc, char** argv) {
	testBSTree();
	testMaxHeap();
	testMinHeap();

	return 0;
}


