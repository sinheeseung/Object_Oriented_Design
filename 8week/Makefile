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

Circle.o : Circle.h Circle.cpp
	g++ --std=c++17 -c Circle.cpp -o $@

Triangle.o : Triangle.h Triangle.cpp
	g++ --std=c++17 -c Triangle.cpp -o $@

Rectangle.o : Rectangle.h Rectangle.cpp
	g++ --std=c++17 -c Rectangle.cpp -o $@

shapeutil.o : ShapeUtil.h ShapeUtil.cpp
	g++ --std=c++17 -c ShapeUtil.cpp -o $@

main : main.cpp Circle.o Triangle.o Rectangle.o shapeutil.o $(GTEST_HEADERS)
	g++ --std=c++17 main.cpp Circle.o Triangle.o Rectangle.o shapeutil.o -o $@

calc_test.o : calc_test.cpp $(GTEST_HEADERS)
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 -c calc_test.cpp -o $@

test : calc_test.o Circle.o Triangle.o Rectangle.o shapeutil.o gtest_main.a
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 $^ -o $@

.PHONY: all clean 


