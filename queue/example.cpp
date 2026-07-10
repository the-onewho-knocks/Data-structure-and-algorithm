#include <bits/stdc++.h>
using namespace std;


//Q1. Can you insert in the middle of a queue?
// No. You can only insert at the rear.

//Q2. Can you remove from the rear?
//No. You can only remove from the front.


int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front(); // 10

    cout << q.back(); // 30

    q.pop(); // Removes the front element.

    if (q.empty())
        cout << "Empty";
    else
        cout << "Not Empty";

    cout << q.size();
}