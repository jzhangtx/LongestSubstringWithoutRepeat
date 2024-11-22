// LongestSubstringNoRepeat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int GetLongestSubstring(const std::string& str, size_t index)
{
    int count = 1;
    for (size_t i = index+1; i < str.length(); ++i)
    {
        bool repeat = false;
        for (size_t j = index; j < i; ++j)
        {
            if (str[j] == str[i])
            {
                repeat = true;
                break;
            }
        }
        if (repeat)
            break;
        count++;
    }

    return count;
}

int LongestSubstringWithoutRepeat(const std::string& str)
{
    int count = 0;
    for (size_t i = 0; i < str.size(); ++i)
    {
        count = std::max(count, GetLongestSubstring(str, i));
    }

    return count;
}

int main()
{
    while (true)
    {
        std::cout << "Please enter a string (\"q\" to exit): ";
        std::string s;
        std::cin >> s;
        if (s == "q" || s == "Q")
            break;

        std::cout << "Longest substring length is " << LongestSubstringWithoutRepeat(s) << std::endl;
    }
}
