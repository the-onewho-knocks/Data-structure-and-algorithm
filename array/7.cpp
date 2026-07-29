//not solved
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = -123;

    string my_string = to_string(x);
    
    if (!my_string.empty() && (my_string[0] == '-' || my_string[0] == '+'))
    {
        // Reverse starting from index 1 (skipping the sign)
        std::reverse(my_string.begin() + 1, my_string.end());
    }
    else
    {
        // Otherwise, reverse the whole string
        std::reverse(my_string.begin(), my_string.end());
    }

    cout << my_string << endl;
}