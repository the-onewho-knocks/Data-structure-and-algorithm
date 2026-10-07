#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int finddays(vector<int> v , int mid){

        int days = 1;
        int load = 0;

        for(int i = 0 ; i < v.size() ; ++i){
            if(v[i] + load > mid){
                days += 1;
                load = v[i];
            }
            else{
                load += v[i];
            }
        }

        return days;

    }

    int shipWithinDays(vector<int> &weights, int days)
    {
        int maxi = *max_element(weights.begin() , weights.end());
        int sum = accumulate(weights.begin() , weights.end() , 0);

        int left = maxi;
        int right = sum;

        while(left <= right){

            int mid = (right + left)/2;

            int day = finddays(weights , mid);

            if(day <= days){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        return left;
    }
};

int main(){
    Solution sol;
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    cout<<sol.shipWithinDays(v , days)<<endl;

}