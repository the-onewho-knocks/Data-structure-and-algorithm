#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<int> nextGreaterElement(
        vector<int> &nums1,
        vector<int> &nums2)
    {
        int n = nums2.size();
        unordered_map<int, int> mp;

        vector<int> nge(n, -1);
        stack<int> st;

        for (int i = n - 1; i >= 0; --i)
        {

            while (!st.empty() && nums2[st.top()] <= nums2[i])
            {
                st.pop();
            }

            if (!st.empty())
            {
                nge[i] = st.top();
            }

            st.push(i);
        }

        for (auto x = 0; x < nums2.size(); ++x)
            mp[nums2[x]] = x;

        vector<int> ans(nums1.size(), -1);

    for(int i = 0; i < nums1.size(); ++i)
    {
        int index = mp[nums1[i]];
        int nextIndex = nge[index];

        if(nextIndex != -1)
            ans[i] = nums2[nextIndex];
    }

        return ans;
    }
};

int main()
{
}