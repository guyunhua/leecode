#pragma once
#include<string>
using namespace std;

class Solution28 {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        bool ismatch = false;
        for (int i = 0; i < haystack.length(); ++i) {
            int index = 0;
            while (haystack[i + index] == needle[index] && index < needle.length() && i + index < haystack.length()) {
                ++index;
            }
            ismatch = index == needle.length();
            if (ismatch)
            {
                return i;
            }
        }
        return -1;
    }
};