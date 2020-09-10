#pragma once
#include<vector>
#include<algorithm>
using namespace std;
class Solution40 {

private:
    void dfs(const vector<int>& candidates, int target, vector<int> &conbine, vector<vector<int>> &ret, int index) {
        if (target == 0) {
            ret.push_back(conbine);
            printf("sucdess\n");
            return;
        }

        if (index >= freq.size()  || target < freq[index].first)
        {
            return;
        }

        dfs(candidates, target, conbine, ret, index + 1);

        int most = min(target / freq[index].first, freq[index].second);
        for (int i = 1; i <= most; ++i) {
            conbine.push_back(freq[index].first);
            dfs(candidates, target - i * freq[index].first, conbine, ret, index + 1);
        }

        for (int i = 1; i <= most; ++i) {
            conbine.pop_back();
        }

    }
public:
    vector<pair<int, int>> freq;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>> ret;
        vector<int> conbine;
        int index = 0;

        sort(candidates.begin(), candidates.end());
        for (int num : candidates) {
            if (freq.empty() || num != freq.back().first) {
                freq.emplace_back(num, 1);

            }
            else{
                ++freq.back().second;
            }
        }
 

        dfs(candidates, target, conbine, ret, index);
        
        return ret;
    }

};