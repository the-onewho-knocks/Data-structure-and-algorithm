#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 1, 3, 4, 2};
    int ans;
    unordered_map<int, int> mp;
    for (auto x : v)
    {
        mp[x]++;

        if(mp[x] > 1){
            ans =x;
        }
    }

    cout<<mp[3]<<endl;

 

    // cout<<ans<<endl;


    // int left = 0;
    // int right = left+1;
    // sort(v.begin() , v.end());
    // //{1,2,2,3,4}

    // while(left < right){
    //     if(v[left] !=  v[right]){
    //         left++;
    //         right++;
    //     }
    //     else if(v[left] == v[right]){
    //         cout<<v[left]<<endl;
    //         break;
    //     }
    // }
}