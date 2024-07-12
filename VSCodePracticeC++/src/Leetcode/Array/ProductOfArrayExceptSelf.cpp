//
//  ProductOfArrayExceptSelf.cpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 12.07.2024.
//

#include "ProductOfArrayExceptSelf.hpp"
#include "vectorUtils.hpp"
#include <iostream>

ProductOfArrayExceptSelf::ProductOfArrayExceptSelf() {
}

void ProductOfArrayExceptSelf::test() {
    std::cout << "===< ProductOfArrayExceptSelf >===-----------------------\n";
    ProductOfArrayExceptSelf instance;

    // Test 1
    std::vector<int> nums1 = {1,2,3,4};
    std::vector<int> result1 = instance.productExceptSelf(nums1);
    std::cout << "{" + joinVector(nums1, ", ") + "}: {" + joinVector(result1, ", ") + "}" << std::endl;
    
    // Test 2
    std::vector<int> nums2 = {-1,1,0,-3,3};
    std::vector<int> result2 = instance.productExceptSelf(nums2);
    std::cout << "{" + joinVector(nums2, ", ") + "}: {" + joinVector(result2, ", ") + "}" << std::endl;
}

std::vector<int> ProductOfArrayExceptSelf::productExceptSelf(std::vector<int>& nums) {
    int numsCount = nums.size();
    std::vector<int> resultNums(numsCount, 1);

    int product = 1;
    for (size_t index = 0; index < (numsCount - 1); index++) {
        product = product * nums[index];
        resultNums[index + 1] = product;
    }

    product = 1;
    for (size_t index = (numsCount - 1); index > 0; index--) {
        product = product * nums[index];
        resultNums[index - 1] = product * resultNums[index - 1];
    }

    return  resultNums;
}
