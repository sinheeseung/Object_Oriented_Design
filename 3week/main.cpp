/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include <iostream>
#include "/mnt/c/Users/shs72/desktop/Object_Oriented_Design/3week/palindrome.h"

int main(int argc, char* argv[]) {
        using std::cout;
        int min = atoi(argv[1]);
        int max = atoi(argv[2]);
        int count = countPalindrome(min, max);
        cout << count << "\n";
        return 0;
}
