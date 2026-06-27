#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {100, 200, 300, 400};
    int k = 2;
    int maximum = 0;
    int i = 0;
    int sum = 0;
    
    while (i < k)
    {
        sum = sum + nums[i];
        i++;
    }
    maximum = max(maximum, sum);

    i = k;
    while (i < nums.size())
    {
        sum = sum + nums[i] - nums[i - k];
        maximum = max(maximum, sum);
        i++;
    }

    cout << maximum << endl;
}