//
//  PhonePad.cpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 13.06.2024.
//

#include "PhonePad.hpp"
#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>

const std::map<char, std::string> keysMap = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};

PhonePad::PhonePad() {
}

std::vector<std::string> PhonePad::allLetterCombinations(const std::string digits) {
    return mappingDigit(0, digits, "");
}

std::vector<std::string> PhonePad::mappingDigit(size_t atIndex, const std::string digits, std::string prevMapped) {
    char digit = digits[atIndex];
    auto key = keysMap.find(digit);
    
    if (key == keysMap.end()) {
        std::string message = "Digits contain incorrect character '";
        message = message + digit + "'!";
        throw std::runtime_error(message);
    }
    std::string letters = key->second;
    
    std::vector<std::string> resultMapping;

    for (size_t index = 0; index < letters.length(); index++) {
        char letter = letters[index];
        std::string currMapped = prevMapped + letter;

        if (atIndex == digits.length() - 1) {
            resultMapping.insert(resultMapping.end(), currMapped);
        } else {
            std::vector<std::string> mapped = mappingDigit(atIndex + 1, digits, currMapped);
            resultMapping.insert(resultMapping.end(), mapped.begin(), mapped.end());
        }
    }

    return resultMapping;
}

void test() {
    // PhonePad task
    try {
        PhonePad pad;
        std::vector<std::string> allCombinations = pad.allLetterCombinations("234");
        for (const auto& combination : allCombinations) {
            std::cout << combination << "\n" << std::endl;
        }
    } catch (const std::runtime_error& e) {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }
}
