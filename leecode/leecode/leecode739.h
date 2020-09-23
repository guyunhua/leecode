#pragma once
#include<vector>
#include<array>
using namespace std;
class Solution739 {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int len = T.size();
        vector<int> ret(len);
      
        int v[101] = {-1};
        

        for (int i = len -1; i >= 0; --i)
        {
            int c = T[i];
            v[c] = i;

            int index = -1;
            for (int j = c + 1; j < 101; j++)
            {
                if (v[j] > 0 ) {
                    if (index < 0) {
                        index = v[j];
                    }
                    else
                    {
                        index = min(index, v[j]);
                    }
                    
                }
            }

            if (index > 0) {
                ret[i] = index - i;
            }
            else
            {
                ret[i] = 0;
            }
        }

        return ret;
    }
};