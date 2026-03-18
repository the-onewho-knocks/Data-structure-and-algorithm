#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    // vector<int> nums = {1,2,3,4};

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

    // cout<< "\n";
    // //nums.insert(nums.begin()+2, 10);
    // for(int i = 0 ; i < nums.size() ; ++i){
    //     cout<<nums[i]<<" ";
    // }

    // vector<int>v={0,0,1,1,1,2,2,3,3,4};
    // // sort(v.begin() , v.end());
    // // for(int i : v){
    // //     cout<<i<<" ";
    // // }
    // unordered_map<int,int>freq;
    // for(int x : v){
    //     freq[x]++;
    // }

    // for (auto &p : freq)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    // vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
    // int k = 0;

    //     for(int i = 0; i < nums.size(); i++)
    //     {
    //         if(nums[i] != 0)
    //         {
    //             nums[k] = nums[i];
    //             k++;
    //         }
    //     }
    //     cout<<k<<endl;

    //     while(k < nums.size())
    //     {
    //         nums[k] = 0;
    //         k++;
    //     }

    //     for(int x : nums){
    //         //cout<<x<<endl;
    //     }

    // for(int i = 1; i < nums.size(); i++)
    // {
    //     if(nums[i] != nums[i-1])
    //     {
    //         nums[k] = nums[i];
    //         k++;
    //     }
    // }

    // for(int x : nums){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<k;
    vector<int>nums={-1,0,1,2,-1,-4};
    int target = 0;
    int n = nums.size();
    vector<pair<int, int>> indexedNums;
    for (int i = 0; i < n; ++i)
    {
        indexedNums.push_back({nums[i], 0});
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     cout << indexedNums[i].first << " " << indexedNums[i].second << endl;
    // }

    sort(indexedNums.begin() , indexedNums.end());
    for(auto x : indexedNums){
        cout<< x.first;  
    }

    // int left = 0;
    // int right = n-1;

    // while (left<right){
    //     int sum = indexedNums[left].first + indexedNums[right].first;

    //     if(sum==target){
    //         cout<<indexedNums[left].second<<" "<< indexedNums[right].second;
    //     }
    //     else if(sum < target){
    //         left++;
    //     }
    //     else{
    //         right++;
    //     }
    // }



    ///

}