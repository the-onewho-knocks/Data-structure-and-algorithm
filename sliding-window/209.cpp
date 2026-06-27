#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {2,3,1,2,4,3};
    int target = 7;
    int left = 0;
    int sum = 0;

    for(int right = 1 ; right < nums.size() ; ++right){
        sum = nums[left] + nums[right];
        while(sum >= target){
            
        }
    }
}