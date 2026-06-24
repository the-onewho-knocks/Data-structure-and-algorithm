#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "the sky is blue";
            reverse(s.begin() , s.end());
        string ans;
        vector<string> words;
        stringstream ss(s);
        string tempwords;

        while(ss >> tempwords){
            words.push_back(tempwords);
        }

        reverse(words.begin() , words.end());
        int i = 0;
        while(i < words.size()){
            ans += words[i];
            if(i < words.size()-1){
                ans += " ";
            }
            ++i;
        }

        cout<<ans;
    }