#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int>nums2 = {2,5,6};
    int n = 3;

    vector<int>v;

    int left = 0 ;
    int right = m+n;

    // while(left < right){
    //     v.push_back(nums1[left]);
    //     v.push_back(nums2[right]);

    //     left++;
    //     right--;
    // }

    

    for(int i = 0 ; i<m ; ++i){
            v.push_back(nums1[i]);
    }

    for(int i = 0 ; i<n ; ++i){
            v.push_back(nums2[i]);
        
    }

    sort(v.begin() , v.end());


    for(int i = 0 ; i < v.size() ; ++i){
        cout<<v[i]<<endl;
    }

}