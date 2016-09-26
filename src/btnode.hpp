/*
 * btnode.h
 *
 *  Created on: Sep 25, 2016
 *      Author: derek
 */

#ifndef SRC_BTNODE_HPP_
#define SRC_BTNODE_HPP_

class BTNode {
public:
	int value;
	BTNode* leftChild;
	BTNode* rightChild;
	BTNode(int);

};



#endif /* SRC_BTNODE_HPP_ */
