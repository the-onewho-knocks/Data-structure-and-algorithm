#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> numbers = {2,7,11,15};
    vector<int> ans;
    int target = 9;

    int left = 0;
    int right = numbers.size()-1;

    while (left < right){
        int sum = numbers[left] + numbers[right];
        if(sum > target){
            right--;
        }
        else if(sum < target){
            left++ ;
        }
        else{
            left = left + 1;
            right = right + 1;
            ans.push_back(left);
            ans.push_back(right);
            left++;
            right--;
        }
    }

    for(int x : ans){
        cout<<x<<endl;
    }
}