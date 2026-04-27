#include <bits/stdc++.h>
using namespace std;

void it()
{
    list<int> l = {10, 20, 30};

    auto it = l.begin();
    advance(it, 1); // move iterator

    l.insert(it, 15); // insert before 20
    l.remove(20);     // removes all 20
    cout << l.size();
    cout << l.empty();
}

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(80);
    l.push_front(23);

    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}