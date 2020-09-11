#pragma once
#include<vector>
#include<numeric>
using namespace std;
class Solution216 {
private:
    vector<vector<int>> ret;
    vector<int> conbine;
    int max = 9;

    //k����, ��Ϊn
    void dfs(int k, int n, int index) {
        if (conbine.size() > k ) {
            return;
        }
        //��������
        if (conbine.size() == k && accumulate(conbine.begin(), conbine.end(), 0) == n) {
            ret.push_back(conbine);
            return;
        }
        if (index > 9) {
            return;
        }
        conbine.push_back(index);
        dfs(k, n, index + 1);
        conbine.pop_back();
        dfs(k, n, index + 1);
            
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        ret.clear();
        conbine.clear();
        dfs(k, n, 1);
        return ret;
    }
};