/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_PART_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_PART_H_

#include <string>
class Part {
 public :
         explicit Part(std::string factory_name);
         virtual std::string GetInfo() const = 0;
         const std::string& factory_name() const;
 private :
         const std::string factory_name_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_PART_H_
