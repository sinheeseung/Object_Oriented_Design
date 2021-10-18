#include <iostream>
#include "calc.h"

using namespace std;

int main(int argc, char* argv[]) {
        char *op = argv[1];
        unsigned int num_1 = atoi(argv[2]);
        unsigned int num_2 = atoi(argv[3]);
        cout << op << "\n";
	cout << *op << "\n";
	int result = calc(*op, num_1, num_2);
        cout << result << "\n";
        return 0;
}
