#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {-4,-1,0,3,10};
    for (int &x : v) {
    x *= x;
    }
    int left = 0;
    int right = v.size()-1;
    sort(v.begin() , v.end());
    // while (left < right){

    // }
    for(int x : v){
        cout<<x<<","<<endl;
    }
}

// int main(){
//     string s = "A man, a plan, a canal: Panama";
//     string c = "A man, a plan, a canal: Panama";
//     // reverse(s.begin() , s.end());
//     // cout<<s<<endl;
//     int left = 0;
//     int right = s.size()-1;
//     while (left < right){
//         if(!isalnum(c[left])){
//             left++;
//         }
//         else if(!isalnum(c[right])){
//             right--;
//         }
//         else{
//             if (tolower(c[left]) != tolower(c[right])){
//                 cout<<"false";
//             }
//         }
//         left++;
//         right--;
//     }
//     cout<<"true";
// }

// int main(){
//     vector<int> v = {1,1,2,2,3,4,4};
//     int left = 0;
//     int right = v.size()-1;
//     int count = 0;
//     while (left < right){
//         if(v[left]==v[right]){
//             v.erase(v.begin() + right);
//             count= count + 1;
//             left++;
//             right--;
//         }
//     }
//     cout<<count<<endl;
//     for(int x : v){
//         cout<<x<<" , ";
//     }
// }

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