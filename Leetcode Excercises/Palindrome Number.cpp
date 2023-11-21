//
//  Palindrome Number.cpp
//  
//
//  Created by Harrison Showman on 11/20/23.
//

/*
 
 Given an integer x, return true if x is a
 palindrome
 , and false otherwise.

  

 Example 1:

 Input: x = 121
 Output: true
 Explanation: 121 reads as 121 from left to right and from right to left.
 Example 2:

 Input: x = -121
 Output: false
 Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
 Example 3:

 Input: x = 10
 Output: false
 Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
  

 Constraints:

 -231 <= x <= 231 - 1
 
 */

#include "Palindrome Number.hpp"

class Solution {
public:
    bool isPalindrome(int x) {
        string backwards = "", forwards = "";
        
        stringstream ss;
        ss << x;
        forwards = ss.str();

        for (int i = 0; i < forwards.length(); i++) {
            backwards += (forwards[forwards.length() - i - 1]);
        }

        return (backwards == forwards);
    }
};
