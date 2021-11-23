/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include "HyundaiPartsFactory.h"
#include "Door.h"
#include "Roof.h"
#include "Wheel.h"
#include <string>

HyundaiPartsFactory* HyundaiPartsFactory::instance_ = NULL;
HyundaiPartsFactory::HyundaiPartsFactory() {}
HyundaiPartsFactory* HyundaiPartsFactory::GetInstance() {
        if (instance_ == NULL) {
                instance_ = new HyundaiPartsFactory();
        }
        return instance_;
}

Part* HyundaiPartsFactory::CreateDoor() const {
        return new Door("hyundai");
}
Part* HyundaiPartsFactory::CreateWheel() const {
        return new Wheel("hyundai");
}
Part* HyundaiPartsFactory::CreateRoof() const {
        return new Roof("hyundai");
}
