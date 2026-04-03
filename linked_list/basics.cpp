#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;                 // empty list
    list<int> l1 = {1, 2, 3, 4}; // are the values of nodes
    list<int> l2(5, 10);         // 5 elements nodes , each value is = 10

    l.push_back(10);
    l.push_front(5);

    // // insert at a position
    // auto it = l.begin();
    // advance(it, 1);
    // l.insert(it, 100);

    // deletion
    l.pop_back();
    l.pop_front();

    // erasing an element
    // auto it = l.begin();
    // advance(it, 1);
    // l.erase(it); // delete element at position

    for (auto it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }
}
