#include <bits/stdc++.h>
using namespace std;

int main(){
    string pattern = "abba";
    string s = "dog cat cat dog";

    unordered_map<string , char> mp;
    set<char> checker;

    vector<string>words;
    stringstream ss(s);
    string word;

    while(ss >> word){
        words.push_back(word);
    }

    if(words.size() != pattern.length()){
        return false;
    } 

    for(int i = 0 ; i < pattern.length() ; ++i){
        string word = words[i];
        char chara = pattern[i];

        if(mp.find(word) == mp.end() && checker.find(chara) == checker.end()){
            checker.insert(chara);
            mp[word] = chara;
        }
        else if(mp[word] != pattern[i]){
            return false;
        }

    }

    return true;

    // for(auto x : words){
    //     cout<<x<<endl;
    // }


}