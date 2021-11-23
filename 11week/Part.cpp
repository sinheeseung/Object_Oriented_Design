/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "Part.h"
#include <string>

Part::Part(std::string factory_name) : factory_name_(factory_name) {}

const std::string& Part::factory_name() const {
        return factory_name_;
}
