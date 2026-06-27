#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;

    unordered_set<int> st;
    int i = 0;
    long long sum = 0;
    long long ans = 0;

    for(int j = 0 ; j< nums.size() ; ++j){

        while(st.count(nums[j])){
            st.erase(nums[i]);
            sum -= nums[i];
            ++i;
        }

        st.insert(nums[j]);
        sum += nums[j];

        while(j - i + 1 > k){
            st.erase(nums[i]);
            sum -= nums[i];
            ++i;
        }

        if(j - i + 1 == k && st.size() == k){
            ans = max(ans , sum);
        }
    }

            cout<<ans<<endl;

    // auto garbage = unique(nums.begin() , nums.end());
    // nums.erase(garbage , nums.end());

    // for(int i = 0 ; i < nums.size() ; ++i){
    //     cout<<nums[i]<<endl;
    // }



    // // creating a window
    // int i = 0;
    // int maximum = 0;
    // int sum = 0;
    // while (i < k)
    // {
    //     sum += nums[i];
    //     ++i;
    // }
    // maximum = sum;

    // // now sliding the window
    // i = k;
    // while (i < nums.size())
    // {
    //     sum += nums[i] - nums[i - k];
    //     maximum = max(maximum, sum);
    //     ++i;
    // }

    // cout << maximum;
}