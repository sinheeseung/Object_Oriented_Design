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

palindrome.o : palindrome.h palindrome.cpp
	g++ --std=c++17 -c palindrome.cpp -o $@

main : main.cpp palindrome.o $(GTEST_HEADERS)
	g++ --std=c++17 main.cpp palindrome.o -o $@

palindrome_test.o : palindrome_test.cpp $(GTEST_HEADERS)
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 -c palindrome_test.cpp -o $@

test : palindrome_test.o palindrome.o gtest_main.a
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 $^ -o $@

.PHONY: all clean 

