#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>  //for converting to lower
using namespace std;

int main()
{
    string s = "    HEllO@123   ";
    string s2(s.size(), ' ');

   // (remove symbols + whitespace)
    // s.erase(remove_if(s.begin(), s.end(),
    //                   [](char c)
    //                   { return !isalnum(c); }),
    //         s.end());


    // for converting to lower case
    transform(s.begin(), s.end(), s2.begin(), ::tolower);


    //for removing white space
    // s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());  
    
    
    cout<<s<<endl;
    cout<<s2<<endl;
}