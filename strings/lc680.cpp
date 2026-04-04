#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                // Try skipping either left or right
                return isPalindrome(s, left + 1, right) ||
                       isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }

        return true;
    }
};

int main()
{
    // string s = "eceec";
    // string k = s;
    // reverse(k.begin(), k.end());
    // if (k == s)
    // {
    //     cout << "true";
    //     return true;
    // }
    // else
    // {
    //     int left = 0;
    //     int right = k.size() - 1;
    //     while (left < right)
    //     {
    //         if (k[left] != k[right])
    //         {
    //             if (k[left] == k[left + 1] && k[right] != k[right - 1])
    //             {
    //                 k.erase(left, 1);
    //                 left++;
    //                 right--;
    //             }
    //             else
    //             {
    //                 k.erase(right, 1);
    //                 left++;
    //                 right--;
    //             }
    //         }
    //         else
    //         {
    //             left++;
    //             right--;
    //         }
    //     }
    //     string a = k;
    //     reverse(k.begin(), k.end());
    //     if (a == k)
    //     {
    //         cout << "true";
    //         return true;
    //     }
    //     else
    //     {
    //         cout << "false";
    //         return false;
    //     }
    // }
}