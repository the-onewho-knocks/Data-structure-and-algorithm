#include<iostream>
#include<vector>
using namespace std;
//we have here both brute force and optimal solution to the problem
int main(){
    vector<int> height ={1,8,6,2,5,4,8,3,7};

        int maxarea = 0;
        int left = 0;
        int right = height.size()-1;
        
        while (left < right){
            int width = right - left;
            int h = min(height[right] , height[left]);
            int area = width * h;
            maxarea = max(maxarea , area);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;

    // for(int i = 0 ; i<v.size(); ++i){
    //     for(int j = i+1 ; j<v.size() ; ++j){
    //         int width = j - i;
    //         int height = min(v[j] , v[i]);
    //         int ans = width * height;
    //         if (ans > sum){
    //             sum = ans;
    //         }
    //     }
    // }

    //     cout<<sum<<endl;

    // while(left < right){
    //     int count = 0;
    //     if(v[left] < v[right]){
    //         count = right - left;
    //         int sum1 = count * v[left];
    //         left++;
    //         if (sum < sum1){
    //             sum = sum1;
    //         }
    //     }
    //     else if(v[left]>v[right]){
    //         count = right - left;
    //         int sum2 = count * v[right];
    //         right--;
    //         if(sum<sum2){
    //             sum = sum2;
    //         }
    //     }

    // }
    // cout<<sum;
    }