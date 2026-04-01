#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>nums = {-1,0,1,2,-1,-4};
     vector<vector<int>> v ;
        int target = 0;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i<nums.size() ; ++i){
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                if(nums[i] + nums[left] + nums[right] < target){
                    right--;
                }
                else if(nums[i] + nums[left] + nums[right] > target){
                    left++;
                }
                else if(nums[i] + nums[left] + nums[right] == target){
                    v.push_back({nums[i] ,nums[left] , nums[right]});
                    left++;
                    right--;
                }
            }
        }

        for(auto &x : v){
    for(auto &y : x){
        cout << y << " ";
    }
    cout << endl;
}
}