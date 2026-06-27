#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> us;
    us.insert(5);
    us.insert(2);
    us.insert(10);
    us.insert(5);

    for (int x : us)
    {
        cout << x << " ";
    }

    auto it = us.find(9);

    if (it != us.end())
    {
        cout << "Found";
    }

    if (us.count(5)) // 1 or 0
    {
        cout << "Exists";
    }
}