#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    string s = "()";
    int left = 0;
    int right = left + 1;

    cout<<s[left]<<endl;
    cout<<s[right]<<endl;
    while(left < right){
        string k = s[left] + s[right];
    }
}