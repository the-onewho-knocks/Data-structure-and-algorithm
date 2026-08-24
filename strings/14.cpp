#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); ++i)
    {
        int j = 0; //1 -> 2
        while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix = strs[i].substr(0, j); //flow //fl
    }

    if (prefix.empty())
        cout << "";

    cout << prefix;
    // vector<string> s;
    // for (auto x : strs)
    // {
    //     if (x.length() >= 2)
    //     {
    //         string k = x.substr(0, 2);
    //         s.push_back(k);
    //     }
    // }

    // for(int i = 1 ; i < s.size() ; ++i){
    //     if(s[i] != s[i - 1]){
    //         cout<<""<<endl;
    //     }
    //     else{
    //         cout<<s[i]<<endl;
    //     }
    // }
}