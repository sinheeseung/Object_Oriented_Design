/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "Car.h"
#include "Part.h"
#include <string>
#include <exception>
#include <iostream>
Car::Car(Part* door, Part* wheel, Part* roof, std::string color) :
        door_(door), wheel_(wheel), roof_(roof), color_(color) {}

std::string Car::GetSpec() {
        std::string ret = "Car(";
        bool hasnext = false;
        if (door_ != nullptr) {
                ret += door_->GetInfo();
                hasnext = true;
        }
        if (wheel_ != nullptr) {
                if (hasnext) {
                        ret += ", ";
                } else {
                        hasnext = true;
                }
                ret += wheel_->GetInfo();
        }
        if (roof_ != nullptr) {
                if (hasnext) {
                        ret += ", ";
                } else {
                        hasnext = true;
                }
                ret += roof_->GetInfo();
        }
        if (hasnext) {
                ret += ", ";
        } else {
                hasnext = true;
        }
        ret += color_ + ")";
        return ret;
}
