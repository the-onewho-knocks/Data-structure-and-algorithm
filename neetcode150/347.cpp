#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> mp;
        vector<int> ans;

        for (auto i : nums)
        {
            mp[i]++;
        }

        for (auto &[key, value] : mp)
        {
            if (value > 1)
            {
                ans.push_back(key);
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    unordered_map<int, int> mp;
    vector<int> ans;

    for (auto i : nums)
    {
        mp[i]++;
    }
    sort(mp.begin(), mp.end());

    for (auto i : mp)
    {
        cout << i.first << " ->  " << i.second;
    }