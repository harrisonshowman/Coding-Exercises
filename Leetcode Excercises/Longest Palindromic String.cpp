//
//  Longest Palindromic String.cpp
//  
//
//  Created by Harrison Showman on 11/20/23.
//

/*
 
 Given a string s, return the longest
 palindromic
  
 substring
  in s.

  

 Example 1:

 Input: s = "babad"
 Output: "bab"
 Explanation: "aba" is also a valid answer.
 Example 2:

 Input: s = "cbbd"
 Output: "bb"
  

 Constraints:

 1 <= s.length <= 1000
 s consist of only digits and English letters.
 
 */

#include "Longest Palindromic String.hpp"

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1) {
            return s;
        }

        auto expand_from_center = [&](int left, int right) {
            while(left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            return s.substr(left + 1, right - left - 1);
        };

        string max_str = s.substr(0, 1);

        for (int i = 0; i < s.length() - 1; i++) {
            string odd = expand_from_center(i, i);
            string even = expand_from_center(i, i + 1);

            if(odd.length() > max_str.length()) {
                max_str = odd;
            }
            if(even.length() > max_str.length()) {
                max_str = even;
            }
        }
        return max_str;
    }
};
