#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> freq;   // frequency inside current window
        unordered_map<int, int> count;  // number of windows containing x

        // First window
        for (int i = 0; i < k; i++) {
            freq[nums[i]]++;
        }

        for (auto [x, f] : freq) {
            count[x]++;
        }

        // Slide the window
        for (int i = k; i < n; i++) {

            // Remove outgoing element
            int outgoing = nums[i - k];

            freq[outgoing]--;

            if (freq[outgoing] == 0) {
                freq.erase(outgoing);
                count[outgoing]--;
            }

            // Add incoming element
            int incoming = nums[i];

            if (freq[incoming] == 0) {
                count[incoming]++;
            }

            freq[incoming]++;
        }

        int ans = -1;

        for (auto [x, windows] : count) {
            if (windows == 1) {
                ans = max(ans, x);
            }
        }

        return ans;
    }
};