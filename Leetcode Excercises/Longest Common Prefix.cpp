//
//  Longest Common Prefix.cpp
//  
//
//  Created by Harrison Showman on 11/21/23.
//

/*
 
 Write a function to find the longest common prefix string amongst an array of strings.

 If there is no common prefix, return an empty string "".

  

 Example 1:

 Input: strs = ["flower","flow","flight"]
 Output: "fl"
 Example 2:

 Input: strs = ["dog","racecar","car"]
 Output: ""
 Explanation: There is no common prefix among the input strings.
  

 Constraints:

 1 <= strs.length <= 200
 0 <= strs[i].length <= 200
 strs[i] consists of only lowercase English letters.
 
 */

#include "Longest Common Prefix.hpp"

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        int minLength = 200;
        int size = strs.size();
        if(size == 1) {
            return strs[0];
        }
        for (int i = 0; i < size; i++) {
            minLength = min(minLength, (int)strs[i].length());
        }

        char temp = ' ';
        for(int i = 0; i < minLength; i++) {
            for(int j = 0; j < size - 1; j++) {
                temp = strs[j][i];
                if(strs[j][i] != strs[j + 1][i]) {
                    return answer;
                }
            }
            if(temp != ' '){
                answer += temp;
            }
        }
        return answer;
    }
};
