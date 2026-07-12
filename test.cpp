#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 7, 3, 6, 5, 6};
    int n = v.size();
    vector<int> leftsum(n, 0);
    vector<int> rightsum(n, 0);

    for (int i = 1; i < v.size()- 1; ++i)
    {
        leftsum[i + 1] = leftsum[i] + v[i];
        cout << leftsum[i] << " +  " << v[i] << " =  " << leftsum[i] + v[i] << endl;
    }
}