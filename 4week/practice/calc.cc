#include <iostream>
#include <cstring>
#include "calc.h"

int add(int num_1, int num_2) {
	return num_1 + num_2;
}
int mi(int num_1, int num_2) {
        return num_1 - num_2;
}
int mul(int num_1, int num_2) {
	std::cout << "mul";
        return num_1 * num_2;
}
//int div(int num_1, int num_2) {
  //      return num_1 / num_2;
//}

int calc(char op, int num_1, int num_2) {
        if (op == '+') {
                return add(num_1, num_2);
        }
        if (op == '-') {
                return mi(num_1, num_2);
        }
        if (op == '*') {
                return mul(num_1, num_2);
        }
       // if (op == '/') {
        //        return div(num_1, num_2);
        //}
}
