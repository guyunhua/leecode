#pragma once
#include<vector>
using namespace std;
class Solution28 {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len = matrix.size();

        for (int i = 0; i < len/2 + 1; i++) {
            int temp = matrix[0][i];
            matrix[0][i + len - 1] = matrix[0][i];
            matrix[i + len - 1][i + len - 1] = matrix[0][i + len - 1];
            matrix[i + len - 1][0] = matrix[i + len - 1][i + len - 1];
            matrix[0][i] = matrix[i + len - 1][0];
        }
    }
};