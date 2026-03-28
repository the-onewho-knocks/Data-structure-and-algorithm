#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int> v = {1,1,2,2,3,4,4};
    int left = 0;
    int right = v.size()-1;
    int count = 0;
    while (left < right){
        if(v[left]==v[right]){
            v.erase(v.begin() + right);
            count= count + 1;
            left++;
            right--;
        }
    }
    cout<<count<<endl;
    for(int x : v){
        cout<<x<<" , ";
    }
}

// int main(){
//     vector<int> v = {1,2,3,4,6};
//     int target = 6;
//     int left = 0;
//     int right = v.size()-1;

//     while(left < right){
//         int sum = v[left] + v[right];

//         if(sum==target){
//             cout<<"true";
//             return 0;
//         }
//         else if(sum < target){
//             left++;
//         }
//         else{
//             right--;
//         }
//     }
//      cout<<"false";
// }