#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int maxi = 0;

    int left = 0;
    int right = height.size() - 1;

    while(left < right){
        int width = right - left;
        int heigh = min(height[left] , height[right]);

        if(left < right){
            left++;
        }else{
            right--;
        }

        int ans = heigh *  width;

        maxi = max(maxi , ans);
       // cout<<maxi<<endl;
    }


    cout<<maxi;


}