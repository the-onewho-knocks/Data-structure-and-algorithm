#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {2, 2, 1};

    unordered_map<int, int> mp;

    for (auto x : nums)
        mp[x]++;

    for(auto x : mp) if(x.second < 2) cout<<x.first;
}