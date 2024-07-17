//
//  ContainsDuplicate.cpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 09.07.2024.
//

#include "ContainsDuplicate.hpp"
#include "vectorUtils.hpp"
#include <iostream>
#include <unordered_set>

ContainsDuplicate::ContainsDuplicate() {
}

void ContainsDuplicate::test() {
    std::cout << "===< ContainsDuplicate >===-----------------------\n";
    ContainsDuplicate instance;
    
    // Test 1
    std::vector<int> nums1 = {1,2,3,1};
    bool result1 = instance.containsDuplicate(nums1);
    std::cout << "{" + joinVector(nums1, ", ") + "}: " + (result1 ? "true" : "false") << std::endl;
    
    // Test 2
    std::vector<int> nums2 = {1,2,3,4};
    bool result2 = instance.containsDuplicate(nums2);
    std::cout << "{" + joinVector(nums2, ", ") + "}: " + (result2 ? "true" : "false") << std::endl;
    
    // Test 3
    std::vector<int> nums3 = {1,1,1,3,3,4,3,2,4,2};
    bool result3 = instance.containsDuplicate(nums3);
    std::cout << "{" + joinVector(nums3, ", ") + "}: " + (result3 ? "true" : "false") << std::endl;
}

bool ContainsDuplicate::containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> hashSet;
    for (int num : nums) {
        if (hashSet.contains(num)) {
            return true;
        }
        hashSet.insert(num);
    }
    return false;
}
