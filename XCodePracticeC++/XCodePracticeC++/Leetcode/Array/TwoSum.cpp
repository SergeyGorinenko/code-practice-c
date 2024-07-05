//
//  TwoSum.cpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 04.07.2024.
//

#include "TwoSum.hpp"
#include "vectorUtils.hpp"
#include <map>
#include <iostream>

TwoSum::TwoSum() {
}

std::vector<int> TwoSum::twoSum(std::vector<int>& nums, int target) {
    std::vector<int> result = nums;
    std::map<int, int> prevMap;
    
    
    for(int index = 0; index < nums.size(); index++) {
        int num = nums[index];

        int diff = target - num;
        if (prevMap.count(diff)) {
            result = {index, prevMap[diff]};
            sort(result.begin(), result.end());
            return result;
        } else {
            prevMap[num] = index;
        }
    }

    return  result;
}

void TwoSum::test() {
    std::cout << "===< TwoSum >===-----------------------\n";

    // Test 1
    std::vector<int> nums1 = {2,7,11,15};
    int target1 = 9;
    std::vector<int> result1 = twoSum(nums1, target1);
    std::cout << "{" + joinVector(nums1, ", ") + "}: {" + joinVector(result1, ", ") + "}" << std::endl;
    
    // Test 2
    std::vector<int> nums2 = {3,2,4};
    int target2 = 6;
    std::vector<int> result2 = twoSum(nums2, target2);
    std::cout << "{" + joinVector(nums2, ", ") + "}: {" + joinVector(result2, ", ") + "}" << std::endl;

    // Test 3
    std::vector<int> nums3 = {3,3};
    int target3 = 6;
    std::vector<int> result3 = twoSum(nums3, target3);
    std::cout << "{" + joinVector(nums3, ", ") + "}: {" + joinVector(result3, ", ") + "}" << std::endl;
}
