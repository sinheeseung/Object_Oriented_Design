# TODO: Set your googletest directory path
GTEST_DIR=/mnt/c/Users/shs72/desktop/Object_Oriented_Design/4week/googletest/googletest

CPPFLAGS += -isystem $(GTEST_DIR)/include

CXXFLAGS += -pthread

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

GTEST_SRCS_ = $(GTEST_DIR)/src/*.cc $(GTEST_DIR)/src/*.h $(GTEST_HEADERS)

# TODO: Set your executable target
all : main

# TODO: Change 'main' and 'main_test' to your executable and test respectively
clean :
	rm -f gtest.a gtest_main.a *.o main test

gtest-all.o : $(GTEST_SRCS_)
	g++ $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest-all.cc

gtest_main.o : $(GTEST_SRCS_)
	g++ $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest_main.cc

gtest.a : gtest-all.o
	$(AR) $(ARFLAGS) $@ $^

gtest_main.a : gtest-all.o gtest_main.o
	$(AR) $(ARFLAGS) $@ $^

car.o : Car.h Car.cpp
	g++ --std=c++17 -c Car.cpp -o $@

CarBuilder.o : CarBuilder.h CarBuilder.cpp
	g++ --std=c++17 -c CarBuilder.cpp -o $@

KiaPartsFactory.o : KiaPartsFactory.h KiaPartsFactory.cpp
	g++ --std=c++17 -c KiaPartsFactory.cpp -o $@

HyundaiPartsFactory.o : HyundaiPartsFactory.h HyundaiPartsFactory.cpp
	g++ --std=c++17 -c HyundaiPartsFactory.cpp -o $@

Part.o : Part.h Part.cpp
	g++ --std=c++17 -c Part.cpp -o $@

Door.o : Door.h Door.cpp
	g++ --std=c++17 -c Door.cpp -o $@

Roof.o : Roof.h Roof.cpp
	g++ --std=c++17 -c Roof.cpp -o $@

Wheel.o : Wheel.h Wheel.cpp
	g++ --std=c++17 -c Wheel.cpp -o $@

main : main.cpp car.o CarBuilder.o KiaPartsFactory.o Part.o HyundaiPartsFactory.o Door.o Roof.o Wheel.o $(GTEST_HEADERS)
	g++ --std=c++17 main.cpp car.o CarBuilder.o KiaPartsFactory.o Part.o HyundaiPartsFactory.o Door.o Roof.o Wheel.o -o $@

car_test.o : car_test.cpp $(GTEST_HEADERS)
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 -c car_test.cpp -o $@

test : car_test.o car.o CarBuilder.o KiaPartsFactory.o Part.o HyundaiPartsFactory.o Door.o Roof.o Wheel.o gtest_main.a
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 $^ -o $@

.PHONY: all clean 


