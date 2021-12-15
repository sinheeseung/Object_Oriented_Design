/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "Roof.h"
#include <string>

Roof::Roof(std::string factory_name) : Part(factory_name) {}

std::string Roof::GetInfo() const {
        return "[" + factory_name() + "] Roof";
}
