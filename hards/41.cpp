#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st(nums.begin() , nums.end());
        int ans = 0;
        for(int i = 1 ; i < nums.size()+1 ; ++i){
            if(!st.count(i)){
                return i;
            }
        }

        return 0;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {3,4,-1,1};
    int ans = sol.firstMissingPositive(nums);
    cout<<ans;
}