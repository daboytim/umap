/*
 * test.cpp
 *
 *  Created on: Sep 25, 2016
 *      Author: derek
 */

#include "binarysearchtree.hpp"
#include <iostream>

int main(int argc, char** argv) {
	BinarySearchTree bts;
	std::cout << bts.traverse() << std::endl;
	bts.insert(5);
	std::cout << bts.traverse() << std::endl;
	bts.insert(3);
	std::cout << bts.traverse() << std::endl;
	bts.insert(8);
	std::cout << bts.traverse() << std::endl;
	bts.insert(4);
	std::cout << bts.traverse() << std::endl;
	bts.insert(9);
	std::cout << bts.traverse() << std::endl;
	bts.insert(9);
	std::cout << bts.traverse() << std::endl;

	std::cout << bts.contains(4) << std::endl;
	std::cout << bts.contains(7) << std::endl;

	return 0;
}


