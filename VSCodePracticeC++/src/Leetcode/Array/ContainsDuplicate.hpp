//
//  ContainsDuplicate.hpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 09.07.2024.
//

#ifndef ContainsDuplicate_hpp
#define ContainsDuplicate_hpp

/*
 Leetcode 217. Contains Duplicate
 Level: Easy
 Memory: O(n)
 Time: O(n)

 Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 Example 1:
 Input: nums = [1,2,3,1]
 Output: true

 Example 2:
 Input: nums = [1,2,3,4]
 Output: false

 Example 3:
 Input: nums = [1,1,1,3,3,4,3,2,4,2]
 Output: true

 Constraints:
 1 <= nums.length <= 10^5
 -10^9 <= nums[i] <= 10^9
 */

#include <stdio.h>
#include <vector>

class ContainsDuplicate {
public:
    ContainsDuplicate();
    static void test();
    bool containsDuplicate(std::vector<int>& nums);
};

#endif /* ContainsDuplicate_hpp */
