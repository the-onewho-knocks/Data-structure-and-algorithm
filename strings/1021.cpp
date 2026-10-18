#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "(()())(())";
    int n = s.size();
    string result;

    for (char current : s)
    {
        if (!result.empty() && result.back() == current)
            result.pop_back();
        else
            result.push_back(current);
    }
    cout << result << endl;
}