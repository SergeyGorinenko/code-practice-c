//
//  vectorUtils.hpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 04.07.2024.
//

#ifndef vectorUtils_hpp
#define vectorUtils_hpp

#include <stdio.h>
#include <vector>

template<typename T>
std::string joinVector(const std::vector<T>& vec, const std::string& delimiter);

std::string joinVector(const std::vector<int>& vec, const std::string& delimiter);

#endif /* vectorUtils_hpp */
