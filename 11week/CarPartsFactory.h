/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_CARPARTSFACTORY_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_CARPARTSFACTORY_H_

#include "Part.h"
class CarPartsFactory {
 public:
       virtual Part* CreateDoor() const = 0;
       virtual Part* CreateWheel() const = 0;
       virtual Part* CreateRoof() const = 0;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_CARPARTSFACTORY_H_
