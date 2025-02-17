// LongestSubstringNoRepeat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int GetLongestSubstring(const std::string& str, size_t index)
{
    size_t i;
    for (i = index+1; i < str.length(); ++i)
    {
        for (size_t j = index; j < i; ++j)
        {
            if (str[j] == str[i])
            {
                return static_cast<int>(i - index);
            }
        }
    }

    return static_cast<int>(i - index);
}

int LongestSubstringWithoutRepeat(const std::string& str)
{
    int count = 0;
    for (size_t i = 0; i < str.size(); )
    {
        int l = GetLongestSubstring(str, i);
        count = std::max(count, l);
        i += l;
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
