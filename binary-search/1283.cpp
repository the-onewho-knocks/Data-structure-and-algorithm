#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findsmallest(vector<int> v, int mid)
    {
        long long ans = 0;

        for (auto x : v)
        {
            ans += ceil((double)x / (double)mid);
        }

        return ans;
    }

    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while (left <= right)
        {
            int mid = (right + left) / 2;

            long long thresh = findsmallest(nums, mid);

            if (thresh <= threshold)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};