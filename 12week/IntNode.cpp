/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "IntNode.h"

IntNode::IntNode(const Node* left, const Node* right, const int value) :
        Node(left, right), value_(value) { }

std::string IntNode::value() const {
        return std::to_string(value_);
}
