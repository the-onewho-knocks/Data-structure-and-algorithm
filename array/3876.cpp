#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = nums1[0];
        bool isodd = false;

        for(auto x : nums1){
            if(x < mini){
                mini = x;
            }

            if(x & 1){
                isodd = true;
            }
        }

        if(mini & 1){
            return true;
        }

        return !isodd;
    }
};

int main(){
    Solution sol;
    vector<int> nums1 = {13,10};
    if(sol.uniformArray(nums1)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}