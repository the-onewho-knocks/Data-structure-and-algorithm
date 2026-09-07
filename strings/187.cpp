#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    unordered_set<string> seen;
    unordered_set<string> repeated;

    for(int i = 0 ; i < s.size() ; ++i){
        string sub = s.substr(i , 10);

        if(seen.count(sub)){
            repeated.insert(sub);
        }
        else{
            seen.insert(sub);
        }
    }

    vector<string> ans(repeated.begin() , repeated.end());

    for(auto x : ans)cout<<x<<endl;
}