#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    vector<int> nums = {2,5,1,1,4,3};
    
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: find meeting point
    while (true) {
        slow = nums[slow];
        fast = nums[nums[fast]];
        if (slow == fast) break;
    }

    // Phase 2: find duplicate
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}