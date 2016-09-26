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
public:
	BTNode* root;
	BinarySearchTree();
	BinarySearchTree(int);
	void insert(int);
	void remove(int);
	bool contains(int);
	std::string traverse();
};


#endif /* SRC_BINARYSEARCHTREE_HPP_ */
