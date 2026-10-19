#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4 , 5};
    int n = v.size();
    vector<int> first;
    vector<int> second;
    vector<int> ans;

    for (int i = 0; i < (n + 1) / 2; ++i)
    {
        first.push_back(v[i]);
    }

    for (int i = (n + 1) / 2; i < n; ++i)
    {
        second.push_back(v[i]);
    }

    for (int i = 0; i < second.size(); ++i)
    {
        ans.push_back(first[i]);
        ans.push_back(second[second.size() - 1 - i]);
    }

    if (first.size() > second.size())
        ans.push_back(first.back());

    for (auto x : ans)
        cout << x << " ";
}

// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};

//     for (int i = 0; i < v.size() / 2 + 1; ++i)
//     {
//         cout << v[i] << " ";
//     }

//     cout<<'\n';
//     for (int i = v.size() / 2 + 1; i < v.size(); ++i)
//     {
//         cout << v[i] <<" ";
//     }
// }