/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_12WEEK_INTNODE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_12WEEK_INTNODE_H_

#include <string>
#include "Node.h"
class IntNode : public Node{
 public:
        IntNode(const Node* left, const Node* right, const int value);
        std::string value() const;
 private:
        const int value_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_12WEEK_INTNODE_H_
