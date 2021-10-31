/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_6WEEK_NODE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_6WEEK_NODE_H_

#include <string>

class Node {
 public:
         explicit Node(int value, Node* left, Node* right);
         const int value() const;
         const Node* left() const;
         const Node* right() const;
         std::string ToString() const;

 private:
         const int value_;
         const Node* left_;
         const Node* right_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_6WEEK_NODE_H_
