#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {10, 4, 8, 3};
    int n = nums.size();
    vector<int> leftsum(n, 0);
    vector<int> rightsum(n + 1, 0);
    vector<int> ans(n);

    for (int i = 1; i < n; ++i)
    {
        leftsum[i] = leftsum[i - 1] + nums[i - 1];
    }

    for (int i = n - 2; i >= 0; --i)
    {
        rightsum[i] = rightsum[i + 1] + nums[i + 1];
    }

    for (int i = 0; i < n; ++i)
    {
        ans[i] = leftsum[i] + rightsum[i];
    }

    // for (auto x : leftsum)
    //     cout << x << ",";

    // cout<<"";
    
    // for (auto x : leftsum)
    //     cout << x << ",";

    
    // for (auto x : rightsum)
    //     cout << x << ",";

    for (auto x : ans)
        cout << x << ",";
}