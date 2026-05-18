#include <bits/stdc++.h>
using namespace std;

// //fast and slow
// Input: [1,2,3,4,5]
// Output: 3

int main(){

    string v = "PYTHON";
    // vector<int> v = {1 , 2 , 3 , 4 ,5};
    int slow = 0;
    int fast = 0;

    while(fast < v.size() && fast+1 < v.size()){
        slow = slow+1;
        fast = fast + 2;

       // cout<<v[slow]<<endl;
    }

    cout<<v[slow]<<endl;
}

// int main() 
// {
//     int n = 19;
//     int ans;

//     // int k ;
//     // int f;
//     // for(int i = 0; i < n ; ++i)
//     // {
//     //     k = n / 10;
//     //     f = n % 10;
//     //     ans = k * k + f * f;
//     //     cout<<ans<<endl;
//     //     n = ans;
//     // }
//     // if (ans == 1)
//     // {
//     //     cout << true << endl;
//     // }
//     // else
//     // {
//     //     cout << false << endl;
//     // }
// }