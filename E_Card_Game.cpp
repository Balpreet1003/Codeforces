#include <iostream>
#include <string>
using namespace std;
int longestVowelSubsequence(const string& s) {
    string vowels = "aeiou";
    int vowelIndex = 0;    
    int length = 0;          
    for (char c : s) {
        if (c == vowels[vowelIndex]) {
            length++;
            if (vowelIndex < 4) {
                vowelIndex++;
            }
        }
        else if (vowelIndex > 0 && c == vowels[vowelIndex - 1]) {
            length++;
        }
    }
    if (vowelIndex == 4) {
        return length;
    }
        

string largestNumber(string num) {
    vector<char> evenDigits, oddDigits;
    
    for (char ch : num) {
        if ((ch - '0') % 2 == 0) {
            evenDigits.push_back(ch);
        } else {
            oddDigits.push_back(ch);
        }
    }
    
    sort(evenDigits.rbegin(), evenDigits.rend());
    sort(oddDigits.rbegin(), oddDigits.rend());
    
    string result;
    int evenIndex = 0, oddIndex = 0;
    
    for (char ch : num) {
        if ((ch - '0') % 2 == 0) {
            result.push_back(evenDigits[evenIndex++]);
        } else {
            result.push_back(oddDigits[oddIndex++]);
        }
    }
    return result;
}

int main() {
    string num = "7596801";
    cout << largestNumber(num) << endl;
    return 0;
}