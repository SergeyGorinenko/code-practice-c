//
//  MaximumSubarray.cpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 17.07.2024.
//

#include "MaximumSubarray.hpp"
#include "vectorUtils.hpp"
#include <iostream>

MaximumSubarray::MaximumSubarray() {
}

void MaximumSubarray::test() {
    std::cout << "===< MaximumSubarray >===-----------------------\n";
    MaximumSubarray instance;
    
    // Test 1
    std::vector<int> nums1 = {-2,1,-3,4,-1,2,1,-5,4};
    int result1 = instance.maxSubArray(nums1);
    std::cout << "{" + joinVector(nums1, ", ") + "}: " + std::to_string(result1) << std::endl;
    
    // Test 2
    std::vector<int> nums2 = {1};
    int result2 = instance.maxSubArray(nums2);
    std::cout << "{" + joinVector(nums2, ", ") + "}: " + std::to_string(result2) << std::endl;
    
    // Test 3
    std::vector<int> nums3 = {5,4,-1,7,8};
    int result3 = instance.maxSubArray(nums3);
    std::cout << "{" + joinVector(nums3, ", ") + "}: " + std::to_string(result3) << std::endl;
}

int MaximumSubarray::maxSubArray(std::vector<int>& nums) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int num : nums) {
        currSum += num;

        if (currSum > maxSum) {
            maxSum = currSum;
        }
        if (currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}
