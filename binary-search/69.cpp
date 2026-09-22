#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int square(int n){
        long long left = 0;
        long long right = n;
        long long ans = 0;

        while(left < right){
            int mid = left + ( right - left )/2;
            if(mid * mid <= n){
                ans = mid;
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return ans;
    }
};

int main(){
    Solution sol;
    int n = 4;
    cout<<sol.square(n)<<endl;
}