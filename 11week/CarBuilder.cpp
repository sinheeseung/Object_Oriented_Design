/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "CarBuilder.h"
#include "CarPartsFactory.h"
#include "Part.h"
#include <iostream>

CarBuilder::CarBuilder(CarPartsFactory* factory) {
        factory_ = factory;
        door_ = nullptr;
        wheel_ = nullptr;
        roof_ = nullptr;
}

CarBuilder& CarBuilder::CreateDoor() {
        door_ = factory_ -> CreateDoor();
        return *this;
}
CarBuilder& CarBuilder::CreateWheel() {
        wheel_ = factory_ -> CreateWheel();
        return *this;
}
CarBuilder& CarBuilder::CreateRoof() {
        roof_ = factory_ -> CreateRoof();
        return *this;
}
CarBuilder& CarBuilder::SetColor(std::string color) {
        color_ = color;
        return *this;
}
Car* CarBuilder::Build() {
        if (color_ == "")
                color_ = "black";
        return new Car(door_, wheel_, roof_, color_);
}
