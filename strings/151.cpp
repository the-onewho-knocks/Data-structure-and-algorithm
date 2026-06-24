#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "the sky is blue";
    vector<string>words;
    string ans;

    stringstream ss(s);
    string tempword;

    while(ss >> tempword){
        words.push_back(tempword);
    }

    reverse(words.begin() , words.end());

    int i = 0;

    while(i < words.size()){
        ans += words[i];
        if(i < words.size() - 1){
            ans += " ";
        }
        i++;
    }

    // for (int i = 0; i < words.size(); i++) {
    //     ans += words[i];

    //     if(i < words.size()-1){
    //         ans += " ";
    //     }
    // }

    cout<<ans<<endl;

    return 0;
}