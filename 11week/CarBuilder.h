/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_CARBUILDER_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_CARBUILDER_H_

#include "CarPartsFactory.h"
#include "Part.h"
#include "Car.h"
#include <string>
class CarBuilder {
 public:
        explicit CarBuilder(CarPartsFactory* factory);
        CarBuilder& CreateDoor();
        CarBuilder& CreateWheel();
        CarBuilder& CreateRoof();
        CarBuilder& SetColor(std::string color);
        Car* Build();
 private:
        Part* door_;
        Part* wheel_;
        Part* roof_;
        std::string color_;
        const CarPartsFactory* factory_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_CARBUILDER_H_
