#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < n; ++i)
        {
            indexedNums[i] = {nums[i], i};
        }
        for (int i = 0; i < n; ++i)
        {
            cout<<indexedNums[i].first<<" "<<indexedNums[i].second<<endl;
        }
    }
};

int main()
{
    vector<int> testNums = {2, 7, 11, 15};
    int testTarget = 9;

    Solution sol;
}