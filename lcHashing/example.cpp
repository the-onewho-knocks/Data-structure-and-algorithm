#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,2,3,3,3,5};
    unordered_map<int, int> lst;

    for (int i = 0; i < nums.size(); ++i)
    {

        lst[nums[i]]++;
    }

    for (auto x : lst)
    {
        if (x.second > 1)
        {
            cout<<x.first<<endl;
        }
    }
    cout<<-1<<endl;
}