//
//  PhonePad.hpp
//  XCodePracticeC++
//
//  Created by Serhii Horinenko on 13.06.2024.
//

#ifndef PhonePad_hpp
#define PhonePad_hpp

#include <string>

class PhonePad {
public:
    PhonePad();
    std::vector<std::string> allLetterCombinations(const std::string digits);

private:
    std::vector<std::string> mappingDigit(size_t atIndex, const std::string digits, std::string prevMapping);
};


#endif /* PhonePad_hpp */
