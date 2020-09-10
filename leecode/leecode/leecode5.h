#pragma once
#include<string>
#include <vector>
using namespace std;
class Solution5 {
private:
    int expandAroundCenter(string s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            --left;
            ++right;
        }
        return right - left - 1;
    }
public:
    //动态规划
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<int>> temp(n, vector<int>(n));
        string ret;

        for (int l = 0; l < n; ++l) {//n 字串长度
            for (int i = 0; i + l < n; i++) {
                int j = i + l;
                if (l == 0) {
                    temp[i][j] = 1;
                }
                else if (l == 1) {
                    temp[i][j] = s[i] == s[j];
                }
                else
                {
                    temp[i][j] = s[i] == s[j] && temp[i + 1][j - 1] == 1;
                }

                if (temp[i][j] && l + 1 > ret.size()) {
                    ret = s.substr(i, l + 1);
                }
            }
        }
        return ret;
    }


    string longestPalindromebycenter(string s) {
        int start = 0, end = 0;
        for (int i = 0; i < s.length(); i++) {
            int len1 = expandAroundCenter(s, i, i);
            int len2 = expandAroundCenter(s, i, i + 1);
            int len = max(len1, len2);
            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substr(start, end + 1);
    }


};