#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1 ;
        int ans = 0;

        sort(nums.begin() , nums.end());

        while(left < right){
            int sum = nums[left] + nums[right];
            if(sum < target){
                ans = ans + (right - left);
                left++;
            }
            else{
                right--;
            }
        }

        return ans;
    }
};

int main(){
    vector<int> nums = {-6,2,5,-2,-7,-1,3};
    sort(nums.begin() , nums.end());      // - 1 , 1 , 1 , 2 , 3
    int target = 2;
    int ans = 0;

    int left = 0;
    int right = nums.size() - 1;

    // we were almost correct bhai

    while(left <= right){
        cout<<left<<right<<endl;
        int sum = nums[left] + nums[right];
        if(sum < target){
            ans = ans + 1;
            right--;
        }
        else if(sum >= target){
            right--;
        }
        else{
            left++;
        }
    }

    cout<<ans<<endl;
}

