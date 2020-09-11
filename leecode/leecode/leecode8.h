#pragma once
#include<string>
using namespace std;
class Solution8 {
public:
    int myAtoi(string str) {
		bool isstart = false;
		bool findsign = false;
			 
		
		int sign = 1;
		int ret = 0;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (!isstart) {
				if (findsign && !isdigit(str[i]))
				{
					return 0;
				}

				if (isspace(str[i])) {
					continue;
				}

				if (str[i] != ' ' && str[i] != '+' && str[i] != '-' && !isdigit(str[i])) {
					return 0;

				}

				if ( str[i] == '-' || str[i] == '+' && !findsign) {
					sign = str[i] == '-' ? -1 : 1;
					findsign = true;
					continue;
				}
				
				if (isdigit(str[i]) ) {
					isstart = true;
					ret = (str[i] - '0') * sign;
				}
				continue;
			}

			if (isstart) {
				if (!isdigit(str[i]))
					break;
				int num = (str[i] - '0') * sign;
				if (ret  > INT_MAX / 10 || (ret == INT_MAX / 10 && num > 7)) return INT_MAX;
				if (ret  < -INT_MAX / 10 || (ret == -INT_MAX / 10 && num < -8)) return -INT_MAX - 1;
				ret = ret * 10 + num;
			}
			
		}
		return ret;
    }
};