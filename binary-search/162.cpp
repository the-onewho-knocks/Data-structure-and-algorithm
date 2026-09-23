#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findPeakElement(vector<int>v){
        int target = v[0];
        for(auto x : v){
            if(x > target){
                target = x;
            }
        }

        int left= 0;
        int right = v.size();

        while(left <= right){

            int mid = left + (right - left)/2;

            if(v[mid] == target) return mid;

            if(v[left] <= target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return 0;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,1,3,5,6,4};
    cout<<sol.findPeakElement(nums)<<endl;
}