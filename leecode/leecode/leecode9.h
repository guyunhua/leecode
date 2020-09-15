#pragma once
class Solution9 {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;
        while (rev < x)
        {
            int num = x % 10;
            x = x / 10;

            rev = rev * 10 + num;
        }

        return rev == x || rev/10 == x;

    }
};