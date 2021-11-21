/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_9WEEK_INTNODE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_9WEEK_INTNODE_H_

#include "Node.h"

class IntNode : public Node{
 public:
        IntNode(const Node* left, const Node* right, const int value);
        const int value() const;

 private:
        const int value_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_9WEEK_INTNODE_H_
