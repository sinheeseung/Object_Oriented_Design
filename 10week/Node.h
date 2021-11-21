/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_10WEEK_NODE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_10WEEK_NODE_H_

#include <string>

class Node {
 public:
         Node(const Node* left, const Node* right);
         const Node* left() const;
         const Node* right() const;
         virtual std::string value() const = 0;
         virtual std::string ToString() const = 0;
 protected:
         const Node* left_;
         const Node* right_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_10WEEK_NODE_H_
