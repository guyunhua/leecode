// leecode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "leecode40.h"
#include "leecode5.h"
#include "leecode6.h"

int main()
{
    Solution40 s;
    std::vector<int> vec{ 2,5,2,1,2};
    s.combinationSum2(vec, 5);

    Solution5 s5;
    s5.longestPalindrome("adsdfasdf");
    //std::cout << "Hello World!\n";

    Solution6 s6;
    s6.convert("PAYPALISHIRING", 3);
}

