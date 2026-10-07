#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    vector<int> merged = nums1;

    merged.insert(merged.end(), nums2.begin(), nums2.end());
    sort(merged.begin(), merged.end());

    int n = merged.size();

    if (merged.size() % 2 != 0)
    {
        return (double)ceil(merged[merged.size() / 2]);
    }
    else
    {
        return (merged[n / 2] - 1) + (merged[n / 2]) / 2.0;
    }
}