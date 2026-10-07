#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canSplit(vector<int> v , int k , long long mid){
        long long subarray = 1;
        long long sum = 0;

        for(auto x : v){
            if(sum + x >= mid){
                subarray++;
                sum = x;
            }
            else{
                sum += x;
            }

        }

        return subarray<=k;
    }

    int splitArray(vector<int>& nums, int k) {
        
        long long left = *max_element(nums.begin() , nums.end());
        long long right = 0;

        for(auto x : nums){
            right += x;
        }

        while(left < right){
            long long mid = (right + left) / 2;

            if(canSplit(nums, k , mid)){
                right = mid;
            }
            else{
                left = mid + 1;
            }

        }

        return left;
    }
};