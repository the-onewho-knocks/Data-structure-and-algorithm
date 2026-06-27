#include <bits/stdc++.h>
using namespace std;

int main()
{
    // A set is a container that stores only unique elements.
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(100);
    s.insert(2);

    cout << s.size() << endl;

    if (s.empty())
    {
        cout << "Empty";
    }

    cout << s.count(5);
    // if 5 exists then 1
    // else 0

    s.erase(5);
    auto it = s.find(7);

    s.erase(it);

    // cleans complete set
    s.clear();

    // returns smallest element
    cout << *s.begin();

    // return largest element
    cout << *prev(s.end());

    // lower bound
    // Returns the first element ≥ x.
    set<int> s = {2, 5, 8, 10, 15};

    auto it = s.lower_bound(6);

    cout << *it; // 8

    //Returns first element > x
    set<int> s = {2, 5, 8, 10, 15};

    auto it = s.upper_bound(8);

    cout << *it;//10

    
}