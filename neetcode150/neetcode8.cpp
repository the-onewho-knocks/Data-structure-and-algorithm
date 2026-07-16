#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string encode(vector<string> &strs) {
        string encoded = "";
        for (const string &s : strs) {
            // Format length as a 4-digit zero-padded string (e.g., "0005")
            string lenStr = to_string(s.size());
            lenStr = string(4 - lenStr.size(), '0') + lenStr; 
            encoded += lenStr + s;
        }

        return encoded;
    }

    vector<string> decode(string &str) {
        vector<string> result;
        int i = 0;
        int n = str.size();
        while (i < n) {
            // We know the length is ALWAYS the next 4 characters! No inner loops needed.
            int length = stoi(str.substr(i, 4));
            i += 4;
            result.push_back(str.substr(i, length));
            i += length;
        }
        return result;
    }

};

// class Solution {
// public:
//     /*
//      * @param strs: a list of strings
//      * @return: encodes a list of strings to a single string.
//      */
//     string encode(vector<string> &strs) {
//         // write your code here
//     }

//     /*
//      * @param str: A string
//      * @return: decodes a single string to a list of strings
//      */
//     vector<string> decode(string &str) {
//         // write your code here
//     }
// };

// int main()
// {

//     vector<string> input = {"lint", "code", "love", "you"};
//     int n = input.size();
//     string str = "";

//     // encode
//     for (int i = 0; i < input.size(); ++i)
//     {

//         if (input[i] == ":")
//         {
//             str.append(input[i] + "::" + ";");
//         }
//         else if (i < n - 1)
//         {
//             str.append(input[i] + ":" + ";");
//         }
//         else
//         {
//             str.append(input[i]);
//         }
//     }

//     cout<<str<<endl;

//     // decode

//     string targetsymbol = ":";
//     string tempword = "";
//     vector<string> output;
//     for (char c : str)
//     {
//         if (isalpha(c))
//         {
//             tempword += c;
//         }
//         else if (c == targetsymbol[0])
//         {

//             if (!tempword.empty())
//             {
//                 output.push_back(tempword);
//                 tempword = "";
//             }

//             output.push_back(targetsymbol);
//         }
//         else
//         {
//             if (!tempword.empty())
//             {
//                 output.push_back(tempword);
//                 tempword = "";
//             }
//         }
//     }

//     if(!tempword.empty()){
//         output.push_back(tempword);
//     }

//     for(auto x : output) cout<<x<<" ,  ";
// }