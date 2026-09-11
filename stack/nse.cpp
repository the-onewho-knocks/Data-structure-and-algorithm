/*\
NSE → Next Smaller Element
PSE → Previous Smaller Element
NGE → Next Greater Element
PGE → Previous Greater Element
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> NSE(vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n , -1);
    stack<int> st;

    for(int i = n - 1 ; i >= 0 ; i--){
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();
        }

        if(!st.empty()){
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    return ans;
};

int main(){

    vector<int> v = {4 , 8 , 5 , 2 , 25};
    vector<int> ans = NSE(v);
    for(auto x : ans) cout<<x<<endl;
}