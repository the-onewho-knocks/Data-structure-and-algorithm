#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "    hello@123   ";

    // (remove symbols + whitespace)
    s.erase(remove_if(s.begin(), s.end(),
                      [](char c)
                      { return !isalnum(c); }),
            s.end());

    // for converting to lower case
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    //for removing white space
    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());  
    
    
    cout<<s<<endl;
}