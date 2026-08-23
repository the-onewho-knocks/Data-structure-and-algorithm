#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> temp = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans;

    int left = 0;
    int right = left + 1;
    // for (int i = 0; i < temp.size() - 1; ++i)
    // {
    //     int right = i + 1;
    //     if (temp[left] < temp[right])
    //     {
    //         ans.push_back(right - i);
    //     }else{
    //         right++;
    //     }
    // }

    while(right < temp.size()){
        if(temp[left] < temp[right]){
            ans.push_back(right - left);
            left++;
            right++;
        }
        else if(temp[left] ){
            right++;
        }
    }

    for (auto x : ans)
        cout << x << endl;
}