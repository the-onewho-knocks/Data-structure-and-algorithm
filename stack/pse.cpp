#include<bits/stdc++.h>
using namespace std;

vector<int> PSE(vector<int> arr){
    int n = arr.size();
    vector<int> ans(n , -1);
    stack<int> st;

    for(int i = 0 ; i < n ; ++i){
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();
        }

        if(!st.empty()){
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    return ans;
}

int main(){
    vector<int> v = {4 , 8 , 5, 2 , 25};
    vector<int> ans = PSE(v);

    for(auto x : ans){
        cout<<x<<endl;
    }
}