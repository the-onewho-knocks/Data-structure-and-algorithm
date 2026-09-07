#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {5,0,1,4} ;
    int k = 3;

    unordered_set<int> maxi;
    unordered_set<int> mini(nums.begin() , nums.end());
    int instability = INT_MAX;

    for(int i = 0 ; i < nums.size() ; ++i){
        maxi.insert(nums[i]);
        auto maxi_it = max_element(maxi.begin() , maxi.end());
        auto mini_it = min_element(mini.begin() , mini.end());

        int a = *maxi_it - *mini_it;
        if(a <= k){
            cout<<i<<endl;
        }

        mini.erase(i);
    }

}