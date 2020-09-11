// leecode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "leecode40.h"
#include "leecode5.h"
#include "leecode6.h"
#include "leecode216.h"
#include "leecode7.h"
#include "leecode8.h"

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

    Solution216 s216;
    s216.combinationSum3(3, 15);

    Solution7 s7;
    s7.reverse(-42);

    Solution8 s8;
    s8.myAtoi("- 234");
}

