//was not able to solve this

#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     vector<double> medianSlidingWindow(vector<int> &nums, int k)
//     {
//     }
// };

int main()
{
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    /*

    $$ {Median} = (a + b + c) - max(a, b, c) - min(a, b, c)$$

    now that we know the formula how do we design a
    sliding window plus this formula together

    my approch is we take max and mini of current window
    while we are iterating already and when k == right - left + 1
    in that moment we apply the formula for this

    sum = 1 + 3 + (-1) = 3
    max = 3
    min = -1

    3 - 3 - (-1) = 1
    append(1) into answer vector

    */

    unordered_set<int> st;
    vector<int> ans;
    int left = 0;
    int sum = 0;
    int mini = INT_MAX; //-1
    int maxi = INT_MIN; // 3

    for (int right = 0; right < nums.size(); ++right)
    {
        mini = min(mini, nums[right]); // 1 1 -1
        maxi = max(maxi, nums[right]); // 1 3 3
        sum += nums[right];            // 1 4 3

        if (right - left + 1 == k)
        {
            int answer = 0;

            answer += sum - maxi - mini;

            // cout << answer << endl;

            ans.push_back(answer);
        }

        if(right - left + 1 > k)
        {
            maxi = INT_MIN;
            mini = INT_MAX;
            sum -= nums[left];

            left++;
        }
    }

    for (auto x : ans)
        cout << x << endl;
}