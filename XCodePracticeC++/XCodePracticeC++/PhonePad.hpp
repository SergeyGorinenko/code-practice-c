//
//  PhonePad.hpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 13.06.2024.
//

#ifndef PhonePad_hpp
#define PhonePad_hpp

#include <string>

using namespace std;

class PhonePad {
public:
    PhonePad();
    vector<string> allLetterCombinations(const string digits);

private:
    vector<string> mappingDigit(size_t atIndex, const string digits, string prevMapping);
};


#endif /* PhonePad_hpp */
