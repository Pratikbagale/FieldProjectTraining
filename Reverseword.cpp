#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

std::string reverseWords(std::string s)
{
    // Using stringstream to split the input string into words

    std::stringstream ss(s);
    std::string word;
    std::vector<std::string>
        words;

    // Extracting words from the input string

    while (ss >> word)
    {
        words.push_back(word);
    }

    // Reversing the order of words

    std::reverse(words.begin(), words.end());

    // Concatenting words with a single space

    std::string result;
    for (const auto &w : words)
    {
        result += w + " ";
    }

    // Removing the trailing space

    if (!result.empty())
    {
        result.pop_back();
    }
    return result;
}

int main()
{
    std::string input = "Hello World! ";
    std::string reversed = reverseWords(input);

    std::cout << "Original: " << input << std::endl;

    std::cout << "Reversed:" << reversed << std::endl;

    return 0;
}