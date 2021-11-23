/*
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include <iostream>
#include "HyundaiPartsFactory.h"
#include "KiaPartsFactory.h"
#include "CarBuilder.h"
#include "Car.h"

int main() {
        CarPartsFactory* factory1 = HyundaiPartsFactory::GetInstance();
        CarPartsFactory* factory2 = KiaPartsFactory::GetInstance();

        CarBuilder builder1(factory1);
        Car* car1 = builder1
        .CreateDoor()
        .CreateRoof()
        .SetColor("red")
        .Build();

        CarBuilder builder2(factory1);
        Car* car2 = builder2
        .CreateDoor()
        .Build();

        CarBuilder builder3(factory2);
        Car* car3 = builder3
        .CreateDoor()
        .CreateRoof()
        .CreateWheel()
        .SetColor("white")
        .Build();

        CarBuilder builder4(factory1);
        Car* car4 = builder4
        .SetColor("gray")
        .Build();

        std::cout << car1->GetSpec() << std::endl;
        std::cout << car2->GetSpec() << std::endl;
        std::cout << car3->GetSpec() << std::endl;
        std::cout << car4->GetSpec() << std::endl;

        return 0;
}
