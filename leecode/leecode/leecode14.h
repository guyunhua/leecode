#pragma once
#include<string>
#include <vector>
using namespace std;
class Solution14 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() < 1)
            return "";
        if (strs.size() == 1) {
            return strs[0];
        }
        string ret;
        int index = 0;

        char a;
        while (true) {
            bool iseque = true;
            for (int i = 0; i < strs.size(); i++) {
                string str = strs[i];
                if (index >= str.size()) {
                    iseque = false;
                    break;
                }
                if (i == 0) {
                    a = strs[i][index];
                }
                else
                {
                    
                    if (str[index] != a) {
                        iseque = false;
                        break;
                    }
                }
            }
            if (iseque) {
                ret += a;
                ++index;
            }
            else
            {
                break;
            }
          
        }
        return ret;
       

    }
};