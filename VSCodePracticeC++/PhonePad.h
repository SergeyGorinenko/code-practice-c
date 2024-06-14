#ifndef PhonePad_h
#define PhonePad_h

#include <string>

using namespace std;

class PhonePad {
public:
    PhonePad();
    vector<string> allLetterCombinations(const string digits);

private:
    vector<string> mappingDigit(size_t atIndex, const string digits, string prevMapping);
};

#endif /* PhonePad_h */
