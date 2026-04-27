#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    //Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
    sort(strs.begin() , strs.end());

    for(auto i : strs){
        cout<<i<<endl;
    }
}