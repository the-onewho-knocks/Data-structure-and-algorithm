#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> digits = {9};
    int n = digits.size() - 1;
    vector<int> ans;

    int j = digits[n] + 1;
    while (j > 0)
    {
        int extracted = j % 10;
        ans.push_back(extracted);
        j = j / 10;
    }

    sort(ans.rbegin(), ans.rend());

  //  for(auto x : ans) cout<<x<<endl;

    for (int i = 0; i < ans.size(); ++i){
       // cout<<ans[i]<<endl;;
        digits[n] = ans.back();
    }

   for(auto x : digits) cout<<x<<" , "<<endl;
}