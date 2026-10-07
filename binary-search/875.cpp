#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMax(vector<int> v)
    {
        int num = *max_element(v.begin(), v.end());
        return num;
    }

    int findHours(vector<int> v, int hours)
    {
        int totalhours = 0;

        int n = v.size();

        for (int i = 0; i < n; ++i)
        {
            totalhours += ceil((double)v[i] / (double)hours);
        }

        return totalhours;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 1;
        int right = findMax(piles);
        int ans = INT_MAX;
        while (left <= right)
        {
            int mid = (left + right) / 2;

            int totalhours = findHours(piles, mid);

            if (totalhours <= h)
            {
                ans = min(ans, mid);
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> v = {3, 6, 7, 11};
    int h = 8;

    cout<<sol.minEatingSpeed(v , h)<<endl;
}