#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "pwwkew";
    unordered_set<char> st;

    int left = 0;
    int maxi = 0;;

    for (int right = 0; right < s.size(); ++right)
    {

        while(st.find(s[right]) != st.end())
        {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);
        maxi = max(maxi, right - left + 1);
    }

    cout << maxi;

    // for(int i = 0 ; i < s.size() ; ++i){
    //     if(st.find(s[i]) == st.end()){
    //         st.insert(s[i]);
    //     }
    // }

    // for(char x : st) cout<<x<<endl;
    // cout<<st.size()<<endl;
}