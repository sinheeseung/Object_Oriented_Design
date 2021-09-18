#include <iostream>
#include "palindrome.h"

using namespace std;

int main(int argc, char* argv[]){
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int count = countPalindrome(min,max);
	cout << count << "\n";
	return 0;
}
