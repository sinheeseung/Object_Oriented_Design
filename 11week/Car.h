/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_CAR_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_CAR_H_
#include "Part.h"
#include <string>
class CarBuilder;

class Car {
 public:
        std::string GetSpec();
 private:
        Car(Part* door, Part* wheel, Part* roof, std::string color);
        const Part* door_ = nullptr;
        const Part* wheel_ = nullptr;
        const Part* roof_ = nullptr;
        const std::string color_;
        friend CarBuilder;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_11WEEK_CAR_H_
