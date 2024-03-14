
// Romant to Integer

#include <unordered_map>
#include <string>

using namespace std;
int romanToInt(string s)
{
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int result = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        int currValue = romanValues[s[i]];
        if (currValue < prevValue)
        {
            result -= currValue;
        }
        else
        {
            result += currValue;
        }
        prevValue = currValue;
    }

    return result;
}
// Example usage
#include <iostream>
int main()
{
    string romanNumeral = "XXVII";
    int integerValue = romanToInt(romanNumeral);
    cout << integerValue << endl; // Output: 27
    return 0;
}