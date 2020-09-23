#pragma once
#include<vector>
#include <algorithm>

using namespace std;
class Solution15 {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        //int i = 0;
        //int j = nums.size() - 1;

        vector<vector<int>> ret;

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int right = nums.size() - 1;
            int target = -nums[i];
            for (int left = i + 1; left < nums.size(); left++) {
                if (left > i + 1 && nums[left] == nums[left - 1]) {
                    continue;
                }

                while (right > left && nums[left] + nums[right] > target)
                {
                        --right;
                }
              

                if (left == right)
                    break;

                if (nums[left] + nums[right] == target) {
                    ret.push_back({ nums[i], nums[left], nums[right] });
                }
            }
        }
        
        return ret;
    }

    void dfs(vector<int>& nums, int index) {
        if (index >= nums.size())
            return;

        if (conbine.size() > 3)
            return;

        if (conbine.size() == 3 && sum == 0) {
            ret.push_back(conbine);
            return;
        }

        conbine.push_back(nums[index]);
        sum += nums[index];
        dfs(nums, index + 1);
        conbine.pop_back();
        sum -= nums[index];
        dfs(nums, index + 1);
    }

    vector<vector<int>> ret;
    vector<int> conbine;
    int sum = 0;
};