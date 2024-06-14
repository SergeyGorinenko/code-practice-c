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

const map<char, string> keysMap = {
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

vector<string> PhonePad::allLetterCombinations(const string digits) {
    return mappingDigit(0, digits, "");
}

vector<string> PhonePad::mappingDigit(size_t atIndex, const string digits, string prevMapped) {
    char digit = digits[atIndex];
    auto key = keysMap.find(digit);
    
    if (key == keysMap.end()) {
        string message = "Digits contain incorrect character '";
        message = message + digit + "'!";
        throw runtime_error(message);
    }
    string letters = key->second;
    
    vector<string> resultMapping;

    for (size_t index = 0; index < letters.length(); index++) {
        char letter = letters[index];
        string currMapped = prevMapped + letter;

        if (atIndex == digits.length() - 1) {
            resultMapping.insert(resultMapping.end(), currMapped);
        } else {
            vector<string> mapped = mappingDigit(atIndex + 1, digits, currMapped);
            resultMapping.insert(resultMapping.end(), mapped.begin(), mapped.end());
        }
    }

    return resultMapping;
}
