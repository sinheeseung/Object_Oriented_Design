/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_5WEEK_SWCLASS_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_5WEEK_SWCLASS_H_

#include <string>
#include <vector>
#include "Student.h"

class Swclass {
 public:
                Swclass();
                explicit Swclass(Student st, int num, int sub_class,
                        std::string name, int hw, int mid, int term, int fi);

                std::string getInfo();

 private:
                Student student_;
                int sub_num_;
                int sub_class_;
                std::string sub_name_;
                int hw_per_;
                int mid_per_;
                int term_per_;
                int final_per_;
};

#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_5WEEK_SWCLASS_H_
