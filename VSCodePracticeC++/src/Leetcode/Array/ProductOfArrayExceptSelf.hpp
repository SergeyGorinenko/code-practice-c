//
//  ProductOfArrayExceptSelf.hpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 12.07.2024.
//

#ifndef ProductOfArrayExceptSelf_hpp
#define ProductOfArrayExceptSelf_hpp

#include <stdio.h>
#include <vector>

/*
Leetcode 238. Product of Array Except Self
Level: Medium
Memory: O(1)
Time: O(n)

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

Constraints:
2 <= nums.length <= 10^5
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)
 */

class ProductOfArrayExceptSelf {
public:
    ProductOfArrayExceptSelf();
    static void test();
    std::vector<int> productExceptSelf(std::vector<int>& nums);
};

#endif /* ProductOfArrayExceptSelf_hpp */
