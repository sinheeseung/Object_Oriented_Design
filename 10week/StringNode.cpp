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

std::string StringNode::ToString() const {
        std::string result;
        result = "StringNode(" + value();
        result += ", ";
        if (left_ == NULL) {
                result += "NULL";
        } else {
                result += left()->ToString();
        }
        result += ", ";
        if (right_ == NULL) {
                result += "NULL";
        } else {
                result += right()->ToString();
        }
        return result + ")";
}
