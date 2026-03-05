#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};

    // for(int i = nums.size()-1 ; i<nums.size() ; i--){
    //     cout << nums[i] << " ";
    // }

    nums.push_back(4);  //append
    nums.pop_back();    // remove from last
}