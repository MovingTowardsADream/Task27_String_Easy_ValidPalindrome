#include <iostream>

class Solution {
public:
    static bool isPalindrome(std::string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] > 64 && s[l] < 91) {
                s[l] += 32;
            }
            if (s[r] > 64 && s[r] < 91) {
                s[r] += 32;
            }
            if ((s[l] < 97 || s[l] > 122) && (s[l] < 48 || s[l] > 57)) {
                l++;
                continue;
            }
            if ((s[r] < 97 || s[r] > 122) && (s[r] < 48 || s[r] > 57)) {
                r--;
                continue;
            }
            if (s[l] != s[r]) {
                return 0;
            }
            l++;
            r--;
        }
        return 1;
    }
};

int main()
{
    std::cout << Solution::isPalindrome("0P");
}