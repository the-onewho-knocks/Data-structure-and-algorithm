#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> v;
    vector<int> n;
    int left = 0;
    int right = 1;

        while(left < nums.size()){
            v.push_back(nums[left] * nums[left]);
            v.push_back(nums[right] * nums[right]);
            left++;
            right++;
        }

    // for(int i = 0 ; i < nums.size() ; ++i){
    //     v.push_back(nums[i] * nums[i]);
    // }

    // for(int i = 0 ; i < nums.size() ; ++i){
    //     cout<<v[i]<<endl;
    // }

    for(int i = 0 ; i < nums.size() ; ++i){
        cout<<v[i]<<endl;
    }

    // sort(v.begin(), v.end());

    // for (int i = 0; i < nums.size(); ++i)
    // {
    //     cout << v[i] << endl;
    // }
}