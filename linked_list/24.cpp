#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3};

    for(int i = 0 ; i < v.size() - 1 ; i += 2){
        int j = i + 1;

        swap(v[i] , v[j]);
    }

    for(auto x : v) cout<<x<<endl;
}