//
//  vectorUtils.cpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 04.07.2024.
//

#include "vectorUtils.hpp"
#include <iostream>

template<typename T>
std::string joinVector(const std::vector<T>& vec, const std::string& delimiter) {
    std::string result;
    for (size_t i = 0; i < vec.size(); ++i) {
        result += to_string(vec[i]);
        if (i != vec.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}

std::string joinVector(const std::vector<int>& vec, const std::string& delimiter) {
    std::string result;
    for (size_t i = 0; i < vec.size(); ++i) {
        result += std::to_string(vec[i]);
        if (i != vec.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}
