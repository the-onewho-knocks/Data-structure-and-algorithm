#include<bits/stdc++.h>
using namespace std;

int main(){

  //  for(int i = 1 ; i < 5 + 1 ; ++i)cout<<i<<endl;

    vector<int> nums = {5,1};
    int n = nums.size(); //2
    sort(nums.begin() , nums.end());

    vector<int> ans;

    unordered_set<int> st(nums.begin() , nums.end()) ;

    for(int i = nums[0] ; i<nums[n - 1] ; ++i){
       if(st.find(i) == st.end()){
            ans.push_back(i);
       }
    }

    for(int x : ans) cout<<x<<endl;

    // unordered_set<int> st(nums.begin() , nums.end()) ;
    // vector<int> ans;

    // for(int i = 1 ; i < n ; ++i){
       
    //     if(st.find(nums[i] + 1) == st.end()){
    //         ans.push_back(i);
    //     }
    // }

    // for(int x : ans) cout<<x<<endl;


    // for(int x : nums) st.insert(x);

    // for(int i = 0 ; i < st.size() ; ++i){
    //     if(st.find(nums[i + 1]))
    // }
}