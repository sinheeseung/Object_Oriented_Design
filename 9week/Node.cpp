/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "Node.h"
#include <string>

Node::Node(const Node* left, const Node* right):
        left_(left), right_(right) {}
Node::~Node() {}
const Node* Node::left() const {
        return left_;
}

const Node* Node::right() const {
        return right_;
}
