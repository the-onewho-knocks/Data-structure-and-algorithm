#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();

        vector<int> pse(n, -1);
        vector<int> nse(n, -1);

        stack<int> st;

        for (int i = n - 1; i >= 0; --i)
        {

            while (!st.empty() && heights[st.top()] >= heights[i])
            {
                st.pop();
            }

            if (!st.empty())
            {
                nse[i] = st.top();
            }

            st.push(i);
        }

        while (!st.empty())
        {
            st.pop();
        }

        for (int i = 0; i < n; ++i)
        {

            while (!st.empty() && heights[st.top()] >= heights[i])
            {
                st.pop();
            }

            if (!st.empty())
            {
                pse[i] = st.top();
            }

            st.push(i);
        }

        int maxi = 0;

        for (int i = 0; i < n; ++i)
        {

            int width = nse[i] - pse[i] - 1;
            int area = heights[i] * width;

            maxi = max(maxi, area);
        }

        return maxi;
    }
};

int main()
{
    Solution sol;
    vector<int> height = {2, 1, 5, 6, 2, 3};
    int ans = sol.largestRectangleArea(height);

    cout << ans << endl;
}