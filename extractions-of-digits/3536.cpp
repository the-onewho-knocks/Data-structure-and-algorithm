#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 124;
    vector<int> ans;
    while (n > 0)
    {
        int extracted = n % 10;
        ans.push_back(extracted);
        n = n / 10;
    }

    partial_sort(ans.begin() , ans.begin() + 2 , ans.end() , greater<int>());


    int answer = 1;
    for(int x = 0 ; x < 2 ; ++x){
       answer *= ans[x];
    //    cout<<ans[x]<<endl;
    }   

   cout<<answer<<endl;

}