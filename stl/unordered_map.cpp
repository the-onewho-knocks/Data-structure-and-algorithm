#include <iostream>
#include<vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;

    mp.insert({4, 40});
    mp.insert({5, 50});

    mp.insert(pair<int, int>(6, 60));

    cout << mp[2];

    if (mp.count(2))
    {
        cout << "Key exists";
    }

    auto it = mp.find(2);

    if (it != mp.end())
    {
        cout << it->first << " " << it->second;
    }

    mp.erase(2);

    cout << mp.size();

    mp.clear(); // removes everything

    for (auto &p : mp)
    {
        cout << p.first << " " << p.second << endl;
    }

    //frequency
    vector<int> v = {1, 2, 2, 3, 3, 3};
    unordered_map<int, int> freq;
    for (int x : v)
    {
        freq[x]++;
    }
}