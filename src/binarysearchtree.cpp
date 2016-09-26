/*
 * binarysearchtree.cpp
 *
 *  Created on: Sep 25, 2016
 *      Author: derek
 */

#include "binarysearchtree.hpp"
#include <string>

BinarySearchTree::BinarySearchTree() {
	this->root = nullptr;
}


BinarySearchTree::BinarySearchTree(int value) {
	this->root = new BTNode(value);
}

BinarySearchTree::~BinarySearchTree() {
	do_clear(this->root);
}

void BinarySearchTree::insert(int value) {
	do_insert(this->root, value);
}

void BinarySearchTree::do_insert(BTNode*& root, int value) {
	if (!root) {
		root = new BTNode(value);
	} else if (value < root->value) {
		do_insert(root->leftChild, value);
	} else if (value > root->value) {
		do_insert(root->rightChild, value);
	}
}


void BinarySearchTree::remove(int value) {

}


bool BinarySearchTree::contains(int value) {
	return do_contains(this->root, value);
}

bool BinarySearchTree::do_contains(BTNode*& root, int value) {
	if (!root) {
		return false;
	}
	if (value == root->value) {
		return true;
	} else if (value < root->value) {
		return do_contains(root->leftChild, value);
	} else {
		return do_contains(root->rightChild, value);
	}
}

std::string BinarySearchTree::traverse() {
	std::string s = "[";
	do_traverse(this->root, s);
	if (s.length() == 1) {
		s += ']';
	} else {
		s[s.length()-1] = ']';
	}
	return s;
}

void BinarySearchTree::do_traverse(BTNode*& root, std::string& s) {
	if (root) {
		do_traverse(root->leftChild, s);
		s += std::to_string(root->value) + ',';
		do_traverse(root->rightChild, s);
	}
}

void BinarySearchTree::clear() {
	do_clear(this->root);
}

void BinarySearchTree::do_clear(BTNode*& root) {
	if (root) {
		do_clear(root->leftChild);
		do_clear(root->rightChild);
		delete root;
		root = nullptr;
	}
}
