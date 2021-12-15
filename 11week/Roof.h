/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_ROOF_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_ROOF_H_

#include "Part.h"
#include <string>
class Roof : public Part {
 public :
         explicit Roof(std::string factory_name);
         std::string GetInfo() const override;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_ROOF_H_
