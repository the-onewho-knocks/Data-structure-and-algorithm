#include <bits/stdc++.h>
using namespace std;

// pattern 1 frequency counter
void frequency()
{
    vector<int> v = {1, 1, 2, 3, 2, 1};
    unordered_map<int, int> freq;

    for (int i = 0; i < v.size(); ++i)
    {
        freq[v[i]]++;
    }

    for (auto it : freq)
    {
        cout << it.first << " -> " << it.second << endl;
    }
}

// checks if something exists before
vector<int> seenBefore()
{
    unordered_map<int, int> mp;
    vector<int> nums = {1, 1, 2, 3, 2, 1};
    int target = 2;

    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];

    if (mp.find(complement) != mp.end())
    {
        return {mp[complement], i};
    }

    mp[nums[i]] = i;
}

mp[key]          // access or insert
mp.find(key)     // check existence
mp.erase(key)    // delete
mp.size()        // size
}

int main()
{
    frequency();
}