#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool distance(vector<int> v, int m, int mid)
    {
        int ball = 1;
        int last = v[0];

        for (int i = 1; i < v.size(); ++i)
        {
            if (v[i] - last >= mid)
            {
                ball++;
                last = v[i];
            }
        }
        return ball >= m;
    }

    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());

        int left = 1;
        int right = position.back() - position.front();
        int ans = 0;

        while (left <= right)
        {
            int mid = (right + left) / 2;

            if (distance(position, m, mid))
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> v = {1, 2, 3, 4, 7};
    int m = 3;

    cout << sol.maxDistance(v, m) << endl;
}