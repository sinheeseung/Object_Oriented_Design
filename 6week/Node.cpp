/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "Node.h"
#include <string>

Node::Node(int value, Node* left, Node* right): value_(value),
        left_(left), right_(right) {}

const int Node::value() const {
        return value_;
}

const Node* Node::left() const {
        return left_;
}

const Node* Node::right() const {
        return right_;
}

std::string Node::ToString() const {
        std::string result = "NODE";
        result += "(";
        result += std::to_string(value_);
        result += ", ";
        if (left_ == NULL) {
                result += "NULL";
        } else {
                result += left_->ToString();
        }
        result += ", ";
        if (right_ == NULL) {
                result += "NULL";
        } else {
                result += right_->ToString();
        }
        result += ")";
        return result;
}
