#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s = "ADOBECODEBANC", t = "ABC";
   // output  "BANC"

   unordered_map<char, int> window;
   unordered_map<char, int> need;

   for (auto x : t)
      need[x]++;

   int left = 0;
   int start = 0;
   int minlen = INT_MAX;
   int have = 0;
   int n = need.size();

   for (int right = 0; right < s.size(); ++right)
   {

      char c = s[right];

      window[c]++;

      if (need.count(c) && window[c] == need[c])
      {
         have++;
      }

      while (have == n)
      {

         if (right - left + 1 < minlen)
         {
            minlen = right - left + 1;
            start = left;
         }

         char left_char = s[left];
         if(need.count(left_char)){
            window[left_char]--;
            if(window[left_char] < need[left_char]){
               have--;
            }
         }

         left++;
      }
   }

   if (minlen == INT_MAX)
   {
      cout << "fuck";
   }
   else
   {
      cout << s.substr(start, minlen);
   }
}