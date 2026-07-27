#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,5,4,5};
    int maxi = -INFINITY;

    int left = 0;
    int right = nums.size() - 1;

    sort(nums.begin() , nums.end() , greater<int>());

    for(int x : nums) cout<<x<<endl;

    int ans = (nums[0] - 1) * (nums[1] - 1);

    cout<<ans;


    // while(left < right){
    //     int product = (nums[left]- 1) * (nums[right] - 1);
    //     maxi = max(maxi , product);
    //     left++;
    //     right--;
    // }

   // cout<<maxi<<endl;
}