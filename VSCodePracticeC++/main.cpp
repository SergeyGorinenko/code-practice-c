#include <iostream>
#include "PhonePad.h"

int main(int argc, const char * argv[]) {
    
    // PhonePad task
    try {
        PhonePad pad;
        vector<string> allCombinations = pad.allLetterCombinations("234");
        for (size_t index = 0; index < allCombinations.size(); index++) {
            string combination = allCombinations[index];
            cout << combination << "\n" << endl;
        }        
        // for (const auto& combination : allCombinations) {
        //     cout << combination << "\n" << endl;
        // }
    } catch (const std::runtime_error& e) {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }
    
    return 0;
}
