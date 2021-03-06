﻿// leecode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "leecode40.h"
#include "leecode5.h"
#include "leecode6.h"
#include "leecode216.h"
#include "leecode7.h"
#include "leecode8.h"
#include "leecode9.h"
#include "leecode10.h"
#include "leecode37.h"
#include "leecode11.h"
#include "leecode12.h"
#include "leecode685.h"
#include "leecode28.h"
#include "leecode15.h"
#include"leecode739.h"

#include<memory>

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

    Solution9 s9;
    s9.isPalindrome(121);

    Solution10 s10;
    bool ismatch = s10.isMatch("aaa", "a*a");
    cout <<( ismatch ? "True" : "False") << endl;
    
    Solution37 s37;
    vector<vector<char>> aaaa{
        { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
        { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
        { '6', '.', '.', '1', '9', '5', '.', '.', '.' },
        { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
        { '8', '.', '.', '.', '6', '.', '.', '.', '3' },
        { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
        { '7', '.', '.', '.', '2', '.', '.', '.', '6' },
        { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
        { '.', '.', '.', '4', '1', '9', '.', '.', '5' },
        { '.', '.', '.', '.', '8', '.', '.', '7', '9' } };
        
    s37.solveSudoku(aaaa);

    Solution11 s11;
    vector<int > a{ 1,8,6,2,5,4,8,3,7 };
    s11.maxArea(a);

    Solution12 s12;
    s12.intToRoman(1994);


    Solution685 s685;
    vector<vector<int>> v685{ {1, 2} ,{1, 3},{2, 3}};
    s685.findRedundantDirectedConnection(v685);

    Solution28 s28;
    string stra("a");
    string strb("b");
    s28.strStr(stra,
       strb);
    
    Solution15 s15;
    vector<int> v15{ -1,0,1,2,-1,-4 };
    s15.threeSum(v15);

    Solution739 s739;
    vector<int> v739{ 73,74,75,71,69,72,76,73};
    s739.dailyTemperatures(v739);

    return 0;
}

