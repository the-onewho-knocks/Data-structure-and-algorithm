#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double sum = 0;
        double avg = 0;
        double maxi = 0;
        double kk = static_cast<double>(k); // Declares kk as a double and assigns the casted value

        for (int j = 0; j < kk; ++j)
        {
            sum += nums[j];
            avg = sum / kk;
        }
        maxi = max(maxi, avg);

        for (int j = kk; j < nums.size(); ++j)
        {
            sum += nums[j] - nums[j - kk] + 1;
            avg = sum / kk;
            maxi = max(maxi, avg);
        }

        return maxi;
    }
};

// int main(){
//     Solution sol;
//     // 2. Define your input data
//     std::vector<int> numbers = {1, 12, -5, -6, 50, 3};
//     int k = 4;

//     // 3. Run the method by passing the arguments inside it
//     double maxAvg = sol.findMaxAverage(numbers, k);

//     // 4. Print the result
//     std::cout << "Maximum average: " << maxAvg << std::endl;

//     return 0;
// }

int main()
{
    std::vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double sum = 0;
    double avg = 0;
    double maxi = INT_MIN;
    double kk = k; // Declares kk as a double and assigns the casted value
    cout<<kk<<endl;

    for (int j = 0; j < kk; ++j)
    {
        sum += nums[j];

        avg = sum / kk;
    }
    maxi = max(maxi, avg);

    int i = k;
    while (i < nums.size())
    {
        sum += nums[i] - nums[i - kk];
       // cout << sum << endl;
        avg = sum / kk;
        maxi = max(maxi, avg);
       // cout << maxi << endl;
        ++i;
    }
               cout << maxi << endl;

    // for (int j = j - kk; j < nums.size(); ++j)
    // {
    //     sum += nums[j] - nums[j - kk] + 1;
    //     cout<<sum<<endl;
    //     avg = sum / kk;
    //     maxi = max(maxi, avg);
    //    // cout<<maxi<<endl;
    // }
}