//
//  Median of Two Sorted Arrays.cpp
//  
//
//  Created by Harrison Showman on 11/20/23.
//

/*
 
 Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

 The overall run time complexity should be O(log (m+n)).

  

 Example 1:

 Input: nums1 = [1,3], nums2 = [2]
 Output: 2.00000
 Explanation: merged array = [1,2,3] and median is 2.
 Example 2:

 Input: nums1 = [1,2], nums2 = [3,4]
 Output: 2.50000
 Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
  

 Constraints:

 nums1.length == m
 nums2.length == n
 0 <= m <= 1000
 0 <= n <= 1000
 1 <= m + n <= 2000
 -106 <= nums1[i], nums2[i] <= 106
 
 */

#include "Median of Two Sorted Arrays.hpp"

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m+n;

        vector<int> mergedArray;

        for (int i = 0; i < m; i++) {
            mergedArray.push_back(nums1[i]);
        }
        for(int i = 0; i < n; i++) {
            mergedArray.push_back(nums2[i]);
        }

        sort(mergedArray.begin(), mergedArray.end());

        if(total % 2 == 0) {
            return (double)(mergedArray[(total / 2) - 1] + mergedArray[total / 2]) / 2;
        } else {
            return mergedArray[total / 2];
        }
    }
};
