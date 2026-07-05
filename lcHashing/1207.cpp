#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,2,1,1,3};
    unordered_map<int , int> map;
    unordered_set<int> seen;

    for(int x : arr){
        map[x]++;
    }

    for(auto &[key , value] : map){

        if(seen.find(value) != seen.end()){
            return false;
        }
        seen.insert(value);
    }
}