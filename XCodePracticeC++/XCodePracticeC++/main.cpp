//
//  main.cpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 13.06.2024.
//

#include <iostream>
#include "PhonePad.hpp"

int main(int argc, const char * argv[]) {
    
    // PhonePad task
    try {
        PhonePad pad;
        vector<string> allCombinations = pad.allLetterCombinations("234");
        for (const auto& combination : allCombinations) {
            cout << combination << "\n" << endl;
        }
    } catch (const std::runtime_error& e) {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }
    
    return 0;
}
