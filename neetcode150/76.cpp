#include<bits/stdc++.h>
using namespace std;

int main(){
   string s = "ADOBECODEBANC", t = "ABC";
   // output  "BANC"

   int left = 0;;

   unordered_map<char , int> window;
   unordered_map<char , int> need;

   for(auto x : t) need[x]++;

   for(auto x : need) cout<<x.first<<" -> "<<x.second<<endl;
}