#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1 , 2 , 3, 4 , 5,6};
    // int k = 3;
    // int left = 0;
    // for(int right = 0 ; right < v.size() ; ++right ){
    //     int size = right - left + 1;

    //     if(size == k){
    //         for(int i = left ; i <=right ; ++i){
    //             cout<<v[i]<< " ";
    //         }
    //         cout<<endl;

    //         ++left;
    //     }
    // }

    string s = "abcdef";
    int k = 3;

    int left = 0;
    for(int right = 0 ; right < s.length() ; ++right){
        int size = right - left + 1;

        if(size == k){

            for(int i = left; i <= right ; ++i){
                cout<<s[i]<<" ";
            }
            cout<<endl;
            ++left;
        }
    }
}