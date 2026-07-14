//not solved


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,3,4,4,5,5};

    unordered_map<int , int> mp;

    for(auto x : nums){
        mp[x]++;
    }

    vector<pair<int , int>> v;
    for(auto &[key , value] : mp){
        v.push_back({key , value});
    }

    sort(v.begin() , v.end());

    for(auto x : v){
        cout<<x.first<<" ->  "<<x.second<<endl;
    }

    // auto consective = [](auto &num){
    //     sort(num.begin() , num.end());
    // };

    // int count= 0;

    // priority_queue<int ,vector<int> ,  decltype(consective)> pq(consective);

    // for(auto i : nums){
    //     pq.emplace(i);
    // }

    // while(!pq.empty()){
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }

    // for(int i = 0 ; i < nums.size() ; ++i){
    //     if(i == i + 1){
    //         count++;
    //         while(!pq.empty()){
    //             pq.pop();
    //         }
    //     }
    //     else if(i < i + 1){
    //         pq.push(nums[i]);
    //     }
        
    // }
}