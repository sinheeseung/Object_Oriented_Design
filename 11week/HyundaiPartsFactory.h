/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_HYUNDAIPARTSFACTORY_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_HYUNDAIPARTSFACTORY_H_

#include "CarPartsFactory.h"
class HyundaiPartsFactory : public CarPartsFactory {
 public:
         static HyundaiPartsFactory* GetInstance();
         Part* CreateDoor() const override;
         Part* CreateWheel() const override;
         Part* CreateRoof() const override;
 private:
         HyundaiPartsFactory();
         static HyundaiPartsFactory* instance_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_HYUNDAIPARTSFACTORY_H_
