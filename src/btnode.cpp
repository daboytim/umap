/*
 * btnode.cpp
 *
 *  Created on: Sep 25, 2016
 *      Author: derek
 */

#include "btnode.hpp"

BTNode::BTNode(int value) {
	this->leftChild = nullptr;
	this->rightChild = nullptr;
	this->value = value;
}

