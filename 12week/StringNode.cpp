/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "StringNode.h"
#include <string>
StringNode::StringNode(const Node* left, const Node* right,
              const std::string value) :
        Node(left, right), value_(value) { }

std::string StringNode::value() const {
        return value_;
}
