#include <bits/stdc++.h>
using namespace std;

// int findMinIndex(const vector<int>& nums){
//     if(nums.empty()) return -1;

//     int minindex = 0;

//     for(int i = 1 ; i < nums.size() ; ++i){
//         if(nums[i] < nums[minindex]){
//             minindex = i;
//         }
//     }

//     return minindex;
// }

int main()
{
    vector<int> prices = {7,1,5,3,6,4};


    int buy = prices[0];

    int profit = 0;

    for(int i = 1 ; i < prices.size() ; ++i){

        if(prices[i] < buy){
            buy = prices[i];
        }
        else{
            int sum = prices[i] - buy;
            profit = max(profit , sum);
        }
    }

    cout<<profit<<endl;

    // int left = 0;
    // int right = 1;
    // int total = 0;
    // while (right < prices.size())
    // {
    //     if (prices[left] < prices[right])
    //     {
    //         int sum = prices[right] - prices[left];
    //         total = max(total, sum);
    //     }
    //     else{
    //         left = right;
    //     }

    //     right++;
    // }

    // cout << total << endl;

    // int mini = findMinIndex(prices);
    // int maxi = mini;
    // for(int i = mini ; i < prices.size() ; ++i){
    //     if(prices[i] > prices[maxi]){
    //         maxi = i ;
    //     }
    // }

    // cout<<prices[maxi] - prices[mini]<<endl;
}