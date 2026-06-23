#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m+n - 1;

        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while(j>=0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    
        
    // vector<int>v;

    // for(int i = 0 ; i<m ; ++i){
    //         v.push_back(nums1[i]);
    // }

    // for(int i = 0 ; i<n ; ++i){
    //         v.push_back(nums2[i]);
    // }

    // nums1 = v;

    // sort(nums1.begin() , nums1.end());
        
    }
};