/*
 * binarysearchtree.h
 *
 *  Created on: Sep 25, 2016
 *      Author: derek
 */

#ifndef SRC_BINARYSEARCHTREE_HPP_
#define SRC_BINARYSEARCHTREE_HPP_

#include "btnode.hpp"
#include <string>

class BinarySearchTree {
	void do_insert(BTNode*&, int);
	bool do_contains(BTNode*&, int);
	void do_traverse(BTNode*&, std::string&);
	void do_clear(BTNode*&);
public:
	BTNode* root;
	BinarySearchTree();
	BinarySearchTree(int);
	~BinarySearchTree();
	void insert(int);
	void remove(int);
	bool contains(int);
	std::string traverse();
	void clear();
};


#endif /* SRC_BINARYSEARCHTREE_HPP_ */
