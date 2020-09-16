#pragma once
#include<string>
using namespace std;
class Solution12 {
public:
    string intToRoman(int num) {
       
        string ret;
        int tnum = 1000;


        int temp = num / 1000;
        num = num % 1000;

        for (int i = 0; i < temp; i++) {
            ret += "M";
        }

        temp = num / 100;
        num = num % 100;

        if (temp == 9) {
            ret += "CM";
        }
        else if (temp == 4)
        {
            ret += "CD";
        }
        else
        {
            if (temp >= 5) {
                ret += "D";
                temp -= 5;
            }

            for (int i = 0; i < temp; i++) {
                ret += 'C';
            }
        }
        
        

        temp = num / 10;
        num = num % 10;

        if (temp == 9) {
            ret += "XC";
        }
        else if (temp == 4)
        {
            ret += "XL";
        }
        else
        {
            if (temp >= 5) {
                ret += "L";
                temp -= 5;
            }

            for (int i = 0; i < temp; i++)
            {
                ret += "X";
            }
        }

       

        temp = num;

        if (temp == 9) {
            ret += "IX";
        }
        else if (temp == 4)
        {
            ret += "IV";
        }
        else
        {
            if (temp >= 5) {
                ret += "V";
                temp -= 5;
            }

            for (int i = 0; i < temp; i++)
            {
                ret += "I";
            }
        
        }

        return ret;

    }
};