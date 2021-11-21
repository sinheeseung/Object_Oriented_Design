/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_9WEEK_TREEUTIL_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_9WEEK_TREEUTIL_H_
#include <string>
#include "Node.h"
class TreeUtil {
 public:
         static TreeUtil* GetInstance();
         const std::string ToString(const Node* node) const;

         const std::string PreOrderTraversal(const Node* node) const;
         const std::string InOrderTraversal(const Node* node) const;
         const std::string PostOrderTraversal(const Node* node) const;
 private:
         TreeUtil();
         static TreeUtil* instance_;
};

#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_9WEEK_TREEUTIL_H_
