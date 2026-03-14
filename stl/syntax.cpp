#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};

    // for(int i = nums.size()-1 ; i<nums.size() ; i--){
    //     cout << nums[i] << " ";
    // }

   // nums.push_back(4);  //append
    // nums.pop_back();    // remove from last

    // cout<<nums.front();
    // cout<<nums.back();

    // for (int i = 0 ; i < nums.size() ; i++){
    //     cout<<nums[i]<<" ";
    // }
    // for(int x : nums){
    //     cout<<x<<" ";
    // }

    cout<< "\n";
    //nums.insert(nums.begin()+2, 10);
    for(int i = 0 ; i < nums.size() ; ++i){
        cout<<nums[i]<<" ";
    }

}