#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char , int> mp;

        for(int x = 0 ; x < s.length() ; ++x){
            mp[s[x]]++;
        }

        for(auto x : t){
            mp[x]--;

            if(mp[x] < 0){
                return false;
            }
        }

        return true;

    }
};
// class Solution {
// public:
//     bool isAnagram(string s, string t) {

//         unordered_map<char , char> mp;

//         for(int x ; x < s.length() ; ++x){
//             mp[s[x]] = t[x];
//         }

//         for(auto i : mp){
//             cout<<i.first<<" -> "<<i.second<<endl;
//         }

//         for(auto &[key , value] : mp){
//             if(key == value){
//                 cout<<"true";
//                 return true;
//             }
//             else{
//                 cout<<"false";
//                 return false;
//             }
//         }
//         return 0;
//     }
// };


int main(){
    Solution sol;
    string s = "anagram", t = "nagaram";

    cout<<sol.isAnagram(s , t);
}