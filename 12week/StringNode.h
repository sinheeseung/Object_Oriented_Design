/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_12WEEK_STRINGNODE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_12WEEK_STRINGNODE_H_

#include <string>
#include "Node.h"
class StringNode : public Node{
 public:
        StringNode(const Node* left, const Node* right,
                     const std::string value);
        std::string value() const;
 private:
        const std::string value_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_12WEEK_STRINGNODE_H_
