/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_9WEEK_NODE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_9WEEK_NODE_H_

#include <string>

class Node {
 public:
         Node(const Node* left, const Node* right);
         const Node* left() const;
         const Node* right() const;
         virtual ~Node();
 protected:
         const Node* left_;
         const Node* right_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_9WEEK_NODE_H_

