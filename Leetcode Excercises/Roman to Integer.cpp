//
//  Roman to Integer.cpp
//  
//
//  Created by Harrison Showman on 11/21/23.
//

/*
 
 Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

 Symbol       Value
 I             1
 V             5
 X             10
 L             50
 C             100
 D             500
 M             1000
 For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

 Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

 I can be placed before V (5) and X (10) to make 4 and 9.
 X can be placed before L (50) and C (100) to make 40 and 90.
 C can be placed before D (500) and M (1000) to make 400 and 900.
 Given a roman numeral, convert it to an integer.
 
 */

#include "Roman to Integer.hpp"

class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'M') {
                answer += 1000;
                if(i - 1 >= 0 && s[i-1] == 'C') {
                    answer -= 200;
                }
            }

            else if(s[i] == 'D') {
                answer += 500;
                if(i - 1 >= 0 && s[i-1] == 'C') {
                    answer -= 200;
                }
            }

            else if(s[i] == 'C') {
                answer += 100;
                if(i - 1 >= 0 && s[i-1] == 'X') {
                    answer -= 20;
                }
            }

            else if(s[i] == 'L') {
                answer += 50;
                if(i - 1 >= 0 && s[i-1] == 'X') {
                    answer -= 20;
                }
            }

            else if(s[i] == 'X') {
                answer += 10;
                if(i - 1 >= 0 && s[i-1] == 'I') {
                    answer -= 2;
                }
            }

            else if(s[i] == 'V') {
                answer += 5;
                if(i - 1 >= 0 && s[i-1] == 'I') {
                    answer -= 2;
                }
            }
            else if(s[i] == 'I') {
                answer += 1;
            }

        }
        return answer;
    }
};
