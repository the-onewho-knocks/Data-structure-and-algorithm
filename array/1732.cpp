#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> gain = {44,32,-9,52,23,-50,50,33,-84,47,-14,84,36,-62,37,81,-36,-85,-39,67,-63,64,-47,95,91,-40,65,67,92,-28,97,100,81};

    int n = gain.size()+1;
    vector<int> rightsum(n, 0);

    // rightsum[0] = 1;
    // for(int i = 0 ; i < n-1 ; ++i){
    //     rightsum[i + 1] = rightsum[i] + gain[i];
    // }

    for (int i = 1; i < n; ++i)
    {
        rightsum[i] = rightsum[i - 1] + gain[i - 1];
    }

    for(int x : rightsum) cout<<x<<endl;

    auto max_it = max_element(rightsum.begin() , rightsum.end());

    cout<<*max_it<<endl;
}
