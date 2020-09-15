#pragma once
#include <string>
using namespace std;
//10. 正则表达式匹配
class Solution10 {
public:
    bool isMatch(string s, string p) {
		int i = 0;
		int j = 0;
		for ( j= 0; j < p.length(); j++) {
			if (j + 1 < p.length() && p[j + 1] == '*') {
				j = j + 1;
				if (p[j - 1] == '.') {
					char temp = s[i];
					while (true)
					{
						if (j + 1 < p.length() && i + 1 < s.length()) {
							if (p[j + 1] == s[i + 1] && s[i + 2] != p[j + 1]) {
								break;
							}
						}

						if (++i >= s.length()) {
							
							break;
						}
					}
				}
				else
				{
					while (s[i] == p[j - 1])
					{
						if (j + 1 < p.length() && i + 1 < s.length()) {
							if (p[j + 1] == s[i + 1] && s[i + 2] != p[j + 1]) {
								i++;
								break;
							}
						}

						if (++i >= s.length()) {
							break;
						}
					}
				}
			}
			else
			{
				if (p[j] == '.') {
					i++;//匹配上 i++
				}
				else
				{
					if (p[j] == s[i])
					{
						i++;//
					}
					else
					{
						return false;
					}
				}
			}

			
		}
		return i == s.length() && j == p.length();
    }
};