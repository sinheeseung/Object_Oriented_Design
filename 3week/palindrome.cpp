/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#include <iostream>
#include <string>
#include "/mnt/c/Users/shs72/desktop/Object_Oriented_Design/3week/palindrome.h"

int countPalindrome(unsigned int min, unsigned int max) {
        int count = 0;
        for (int i = min; i <= max; i++) {
                std::string str = std::to_string(i);
                int leng = str.length();
                bool isPalindrome = true;
                for (int j = 0; j < leng/2; j++) {
                        if (str[j] != str[leng -j-1]) {
                                isPalindrome = false;
                                break;
                        }
                }
                if (isPalindrome) {
                        count = count + 1;
                }
        }
        return count;
}
