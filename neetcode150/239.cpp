#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> ans;

    deque<int> dq;

    for(int right = 0 ; right < nums.size() ; ++right){

        while(!dq.empty() && nums[dq.back()] <= nums[right]){
            dq.pop_back();
        }

        dq.push_back(right);

        if(dq.front() <= right - k){
            dq.pop_front();
        }

        if(right >= k - 1){
            ans.push_back(nums[dq.front()]);
        }
    }

    // int left = 0;

    // for (int right = 0; right <= nums.size() - k; ++right)
    // {
    //     priority_queue<int> pq;

    //     for(int i = right ; i < right + k ; ++i){
    //         pq.push(nums[i]);
    //     }

    //     ans.push_back(pq.top());
    // }

    // ans.push_back(pq.top());
    // while (!pq.empty())
    // {
    //     pq.pop();
    // }

    // while(!pq.empty()){
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }

    for (auto x : ans)
        cout << x << endl;
}