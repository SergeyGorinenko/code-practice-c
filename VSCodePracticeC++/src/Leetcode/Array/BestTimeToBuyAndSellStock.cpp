//
//  BestTimeToBuyAndSellStock.cpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 08.07.2024.
//

#include "BestTimeToBuyAndSellStock.hpp"
#include "vectorUtils.hpp"
#include <iostream>

BestTimeToBuyAndSellStock::BestTimeToBuyAndSellStock() {
}

void BestTimeToBuyAndSellStock::test() {
    std::cout << "===< BestTimeToBuyAndSellStock >===-----------------------\n";
    BestTimeToBuyAndSellStock instance;

    // Test 1
    std::vector<int> nums1 = {7,1,5,3,6,4};
    int result1 = instance.maxProfit(nums1);
    std::cout << "{" + joinVector(nums1, ", ") + "}: " + std::to_string(result1) << std::endl;
    
    // Test 2
    std::vector<int> nums2 = {7,6,4,3,1};
    int result2 = instance.maxProfit(nums2);
    std::cout << "{" + joinVector(nums2, ", ") + "}: " + std::to_string(result2) << std::endl;
}

int BestTimeToBuyAndSellStock::maxProfit(std::vector<int>& prices) {
    int profit = 0;
    int minPrice = INT16_MAX;
    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price;
        } else if (price - minPrice > profit) {
            profit = price - minPrice;
        }
    }
    return profit;
}
