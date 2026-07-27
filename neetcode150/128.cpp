#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        if (nums.size() == 0)
        {
            return 0;
        }

        unordered_set<int> s;

        for (int x : nums)
        {
            s.insert(x);
        }

        int longest = 1;

        for (int x : s)
        {

            if (s.find(x - 1) == s.end())
            {

                int streak = 1;
                int current = x;

                while (s.find(current + 1) != s.end())
                {
                    streak += 1;
                    current += 1;
                }

                longest = max(longest, streak);
            }
        }

        return longest;
    }
};

// int main()
// {
//     vector<int> nums = {100, 4, 200, 1, 3, 2};

//     unordered_set<int> s;

//     for (int x : nums)
//     {
//         s.insert(x);
//     }

//     //   for(int x : s)cout<<x<<endl;

//     int longest = 1;

//     for (int i : s)
//     {

//         if (s.find(i - 1) == s.end())
//         {
//             int streak = 1;
//             int current = i;

//             while (s.find(current + 1) != s.end())
//             {
//                 streak += 1;
//                 current += 1;
//             }

//             longest = max(longest, streak);
//         }
//     }

//     cout << longest;
// }

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//     }
// };

// O(N log N)

// class Solution {
// public:
//     int longestConsecutive(std::vector<int>& nums) {

//         if (nums.empty()) return 0;

//         // 1. Sort the array in-place -> O(n log n) time, O(1) extra space
//         std::sort(nums.begin(), nums.end());

//         //nums: {0, 1, 1, 2}

//         int longest = 1;
//         int currentStreak = 1;

//         for (size_t i = 1; i < nums.size(); ++i) {
//             // Skip duplicates entirely
//             if (nums[i] == nums[i - 1]) {
//                 continue;
//             }

//             // If consecutive, grow the streak
//             if (nums[i] == nums[i - 1] + 1) {
//                 currentStreak++;
//             } else {
//                 // Sequence broke, save max and reset
//                 longest = std::max(longest, currentStreak);
//                 currentStreak = 1;
//             }
//         }

//         return std::max(longest, currentStreak);
//     }
// };

// this is brute force solution
// int main(){
//       vector<int> nums = {1,0,1,2};
//       int longest = 1;

//       for(int i = 0 ; i < nums.size() ; ++i){
//         int x = nums[i];
//         int counter = 1;

//         while(find(nums.begin() , nums.end() , x + 1) != nums.end()){
//             x = x + 1;
//             counter++;
//         }

//         longest = max(longest , counter);
//       }

//       cout<<longest<<endl;
// }

// int main()
// {

//     vector<int> nums = {1,0,1,2};
//     set<int> yes;

//     for(auto x : nums){
//         yes.insert(x);
//     }

//     priority_queue<int, vector<int>, greater<int>> minPQ;

//     for (auto x : yes)
//     {
//         minPQ.push(x);
//     }

//     vector<int> result;
//     while (!minPQ.empty())
//     {
//         int top = minPQ.top();
//         minPQ.pop();
//         int second = minPQ.top();
//         minPQ.pop();

//         // cout<<top<<" -> "<<second<<endl;
//         if (top == second)
//         {
//             result.push_back(top);
//         }
//         else if (top + 1 == second)
//         {
//             result.push_back(top);
//             result.push_back(second);
//         }
//     }

//     for (auto x : result)
//         cout << x << endl;

//     // cout<<result.size()<<endl;
// }
