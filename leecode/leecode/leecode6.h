#pragma once
#include<string>
#include<map>
#include<vector>
using namespace std;
class Solution6 {
public:
    string convert(string s, int numRows) {
        map<int, vector<char>> maps;

        int currow = 0;
        bool godown = false;
        for (int i = 0; i < s.length(); i++) {
            maps[currow].push_back(s[i]);
            
            if (currow == 0 || currow == numRows - 1) godown = !godown;
            
            currow = godown ? currow + 1 : currow - 1;
        }

        string ret = "";
        for (auto v = maps.begin(); v != maps.end(); v++)
        {
            for (auto i = 0; i < v->second.size(); i++)
            {
                ret += v->second[i];
            }
        }
        return ret;

    }
};