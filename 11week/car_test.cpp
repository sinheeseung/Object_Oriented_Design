/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include "gtest/gtest.h"
#include "Car.h"
#include "CarBuilder.h"
#include "HyundaiPartsFactory.h"
#include "KiaPartsFactory.h"
#include "Door.h"
#include "Roof.h"
#include "Wheel.h"

TEST(TestBuild, Test1) {
        CarPartsFactory* factory = HyundaiPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .CreateRoof()
        .SetColor("red")
        .Build();

        std::string re = "Car([hyundai] Roof, red)";
        EXPECT_EQ(car->GetSpec(), re);
}

TEST(TestBuild, Test2) {
        CarPartsFactory* factory = HyundaiPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .CreateRoof()
        .SetColor("blue")
        .Build();

        std::string re = "Car([hyundai] Roof, blue)";
        EXPECT_EQ(car->GetSpec(), re);
}

TEST(TestBuild, Test3) {
        CarPartsFactory* factory = HyundaiPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .CreateRoof()
        .Build();

        std::string re = "Car([hyundai] Roof, black)";
        EXPECT_EQ(car->GetSpec(), re);
}

TEST(TestBuild, Test4) {
        CarPartsFactory* factory = HyundaiPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .CreateRoof()
        .CreateDoor()
        .SetColor("red")
        .Build();

        std::string re = "Car([hyundai] Door, [hyundai] Roof, red)";
        EXPECT_EQ(car->GetSpec(), re);
}

TEST(TestBuild, Test5) {
        CarPartsFactory* factory = HyundaiPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .CreateRoof()
        .CreateDoor()
        .CreateWheel()
        .SetColor("yellow")
        .Build();

        std::string re = "Car([hyundai] Door, [hyundai] Wheel";
        re += ", [hyundai] Roof, yellow)";
        EXPECT_EQ(car->GetSpec(), re);
}

TEST(TestBuild, Test6) {
        CarPartsFactory* factory = KiaPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .Build();

        std::string re = "Car(black)";
        EXPECT_EQ(car->GetSpec(), re);
}

TEST(TestBuild, Test7) {
        CarPartsFactory* factory = KiaPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .CreateDoor()
        .Build();

        std::string re = "Car([kia] Door, black)";
        EXPECT_EQ(car->GetSpec(), re);
}

TEST(TestBuild, Test8) {
        CarPartsFactory* factory = KiaPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .CreateWheel()
        .SetColor("green")
        .Build();

        std::string re = "Car([kia] Wheel, green)";
        EXPECT_EQ(car->GetSpec(), re);
}

TEST(TestBuild, Test9) {
        CarPartsFactory* factory = KiaPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .CreateRoof()
        .CreateDoor()
        .Build();

        std::string re = "Car([kia] Door, [kia] Roof, black)";
        EXPECT_EQ(car->GetSpec(), re);
}

TEST(TestBuild, Test10) {
        CarPartsFactory* factory = KiaPartsFactory::GetInstance();

        CarBuilder builder(factory);
        Car* car = builder
        .CreateRoof()
        .CreateDoor()
        .CreateWheel()
        .SetColor("yellow")
        .Build();

        std::string re = "Car([kia] Door, [kia] Wheel";
        re += ", [kia] Roof, yellow)";
        EXPECT_EQ(car->GetSpec(), re);
}
