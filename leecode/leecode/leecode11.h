#pragma once
#include<vector>
using namespace std;
class Solution11 {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;

        int i = 0;
        int j = height.size() - 1;


        while (i != j)
        {
            int left = height[i];
            int right = height[j];

            int w = j - i;
            int h = left < right ? (left) : (right);

            left < right ? ++i : --j;

            maxi = max(w * h, maxi);
        }

        return maxi;
    }
};