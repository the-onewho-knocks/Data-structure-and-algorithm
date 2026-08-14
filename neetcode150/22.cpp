#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 100;

    string s = "()";

    string ans = "";

    for (int i = 0; i < n; ++i)
    {
        ans += s;
    }

    vector<string> a;

    while(true)
    {
        if (!std::prev_permutation(ans.begin(), ans.end()))
        {
            break; // Stop if we run out of smaller permutations
        }
        a.push_back(ans); // Push the updated vector state
    }
    
    for(auto x : a ) cout<<x<<endl;
}