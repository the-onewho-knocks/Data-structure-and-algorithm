#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int , int> mp;
    vector<int> v = {1,2,3,1,2,3,1,1,1,3,2};

    for(char c : v){
        mp[c]++;
    }

    for(auto it : mp){
        cout<<it.first << ":"<< it.second<<endl;;
    }

    cout<<mp[1];

    // mp[1] = 10;
    // mp.insert({2,20});

    // cout<<mp[1]<<endl;

    // //if (mp.count(1)){}

    // // mp.erase(1);

    // for(auto it : mp){
    //     cout<<it.first<<" "<<it.second <<endl;
    // }

    // return 0;
}