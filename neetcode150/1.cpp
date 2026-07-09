#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int , int>> container;

        for(int i = 0 ; i < nums.size() ; ++i){
            container.push_back({nums[i] , i});
        }

        int left = 0;
        int right = nums.size() - 1;

        sort(container.begin() , container.end());

        while(left < right){
            int sum = container[left].first + container[right].first;

            if(sum == target){
                return {container[left].second , container[right].second};
            }
            else if( sum > target){
                right--;
            }
            else{
                left++;
            }
        }

        return {};
    }
};

int main() {
    // 1. Create an instance of the Solution class
    Solution solver;

    // 2. Define a test case and a target sum
    vector<int> nums = {3, 2, 4};
    int target = 6;

    // 3. Call the function
    vector<int> result = solver.twoSum(nums, target);

    // 4. Print the output
    if (!result.empty()) {
        cout << "Indices found: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}