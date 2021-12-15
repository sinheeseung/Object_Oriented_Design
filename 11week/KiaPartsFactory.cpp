/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include "KiaPartsFactory.h"
#include "Door.h"
#include "Roof.h"
#include "Wheel.h"
#include <string>

KiaPartsFactory* KiaPartsFactory::instance_ = NULL;
KiaPartsFactory::KiaPartsFactory() {}
KiaPartsFactory* KiaPartsFactory::GetInstance() {
        if (instance_ == NULL) {
                instance_ = new KiaPartsFactory();
        }
        return instance_;
}

Part* KiaPartsFactory::CreateDoor() const {
        return new Door("kia");
}
Part* KiaPartsFactory::CreateWheel() const {
        return new Wheel("kia");
}
Part* KiaPartsFactory::CreateRoof() const {
        return new Roof("kia");
}
