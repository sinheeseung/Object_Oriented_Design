/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_KIAPARTSFACTORY_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_KIAPARTSFACTORY_H_

#include "CarPartsFactory.h"
class KiaPartsFactory : public CarPartsFactory {
 public:
         static KiaPartsFactory* GetInstance();
         Part* CreateDoor() const override;
         Part* CreateWheel() const override;
         Part* CreateRoof() const override;
 private:
         KiaPartsFactory();
         static KiaPartsFactory* instance_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_KIAPARTSFACTORY_H_
