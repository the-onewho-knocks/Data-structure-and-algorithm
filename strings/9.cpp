#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x = 121;
    string a = to_string(x);
    string b = to_string(x);
    reverse(a.begin(), a.end());
    if (a == b)
    {
        cout << "true" << endl;
        return true;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }
}

bool reverseWitoutInbuilt() {
    std::string str = "Hello";
    int n = str.length();

    // Two pointers: one at start, one at end
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap characters manually
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers toward the center
        start++;
        end--;
    }

    std::cout << "Reversed string: " << str << std::endl; // Output: olleH
    return 0;
}