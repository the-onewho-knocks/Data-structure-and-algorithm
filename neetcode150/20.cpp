#include <bits/stdc++.h>
using namespace std;

//solution
int main(){
    string s = "()[]{}";

    stack<char> st;

    for(char c : s){

        if(c == '(' || c == '[' || c == '{'){
            st.push(c);
        }
        else{

            if(c == ')' && st.top() != '(') return false;
            if(c == ']' && st.top() != '[') return false;
            if(c == '}' && st.top() != '{') return false;

            st.pop();
        }
    }

    if(st.empty()){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}

// int main()
// {
//     string s = "()[]{}";

//     unordered_map<char , int> mp;


//     for(auto x : s) mp[x] = int(x);

//     vector<pair<char , int>> v(mp.begin() , mp.end());

//     for(auto x : v) cout<<x.first<<" -> "<<x.second<<endl;

    
// }

// int main()
// {

//     string s = "()[]{}";

//     stack<char> st;
//     stack<char> st2;
//     string ans = "";

//     for( char x=1 ; x < s.size() ; x++){
//         if(x == ')' || x==']' || x=='}'){

//             st.push(s[x - 1]);
//         }
//     }

//     if(st.empty()) cout<<"true";
//     // for(int i = 0 ; i < s.size() ; ++i)
//     // {
//     //     if(s[i] == ')' || s[i] == ']' || s[i] == '}'){

//     //     }
//     // }
//     // reverse(ans.begin(), ans.end());

//     while(!st.empty()){
//         char k = st.top();
//         cout<<k<<endl;
//         st.pop();
//     }

//      cout << ans;
// }