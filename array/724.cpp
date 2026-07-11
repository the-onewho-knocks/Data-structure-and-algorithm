#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int n = nums.size();
    vector<int> leftsum(n, 0);
    vector<int> rightsum(n + 1, 0);
    vector<int> ans(n);

    for (int i = 1; i < n; ++i)
    {   
       // cout<<leftsum[i - 1]<<" + "<<nums[i - 1]<<" = "<<leftsum[i - 1] + nums[i - 1]<<endl;
        leftsum[i] = leftsum[i - 1] + nums[i - 1];
    }

    for(int i = n - 2 ; i >= 0 ; --i){
        rightsum[i] = rightsum[i + 1] + nums[i + 1];
    }

  //  for(auto x : rightsum) cout<<x<<endl;


    for(int i = 0 ; i < n ; ++i){
        cout<< i<<" = "<<leftsum[i]<<" -> "<<rightsum[i]<<endl;
        // if(rightsum[i] == leftsum[i]){
        //     cout<<i<<endl;
        // }
        // else{
        //     cout<<-1;
        // }
    }
}