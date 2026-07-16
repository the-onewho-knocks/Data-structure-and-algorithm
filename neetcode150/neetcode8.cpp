#include <bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs)
    {
        string encode = "";
        for (string s : strs)
        {
            string lenstr = to_string(s.length());
            lenstr = string(4 - lenstr.length(), '0') + lenstr;
            encode += lenstr + s;
        }
        return encode;
    }

    /*
     * @param str: A string
     * @return: decodes a single string to a list of strings
     */
    vector<string> decode(string &str)
    {
        vector<string> result;
        int n = str.length();
        int i = 0;
        while (i < n)
        {
            int length = stoi(str.substr(i, 4));
            i = i + 4;
            string word = str.substr(i, length);
            result.push_back(word);

            i += length;
        }

        return result;
    }
};

// Helper function to print vectors for easy visual verification
void printVector(const std::vector<std::string> &vec)
{
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << "\"" << vec[i] << "\"";
        if (i + 1 < vec.size())
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main()
{
    Solution solver;

    // Define a list of diverse test cases
    std::vector<std::vector<std::string>> testCases = {
        {"lint", "code", "love", "you"},               // Standard case
        {"hello", "", "world"},                        // Contains an empty string
        {"", ""},                                      // Only empty strings
        {},                                            // Empty list
        {"c#", "is", "fun#and#cool"},                  // Strings containing the delimiter '#'
        {"a muitoooooooooooooo longo string", "short"} // Varying lengths
    };

    std::cout << "--- Starting Encode/Decode Tests ---" << std::endl
              << std::endl;

    for (size_t k = 0; k < testCases.size(); ++k)
    {
        std::vector<std::string> original = testCases[k];

        std::cout << "Test Case " << k + 1 << ":" << std::endl;
        std::cout << "  Original: ";
        printVector(original);

        // 1. Test Encoding
        std::string encodedStr = solver.encode(original);
        std::cout << "  Encoded : \"" << encodedStr << "\"" << std::endl;

        // 2. Test Decoding
        std::vector<std::string> decodedResult = solver.decode(encodedStr);
        std::cout << "  Decoded : ";
        printVector(decodedResult);

        // 3. Verification
        if (original == decodedResult)
        {
            std::cout << "  Result  : SUCCESS" << std::endl;
        }
        else
        {
            std::cout << "  Result  : FAILED ❌" << std::endl;
        }
        std::cout << "----------------------------------------" << std::endl;
    }

    return 0;
}

// class Solution
// {
// public:
//     string encode(vector<string> &strs)
//     {
//         string encoded = "";
//         for (const string &s : strs)
//         {
//             // Format length as a 4-digit zero-padded string (e.g., "0005")
//             string lenStr = to_string(s.size());
//             lenStr = string(4 - lenStr.size(), '0') + lenStr;
//             encoded += lenStr + s;
//         }
//         return encoded;
//     }

//     vector<string> decode(string &str)
//     {
//         vector<string> result;
//         int i = 0;
//         int n = str.size();
//         while (i < n)
//         {
//             // We know the length is ALWAYS the next 4 characters! No inner loops needed.
//             int length = stoi(str.substr(i, 4));
//             i += 4;
//             result.push_back(str.substr(i, length));
//             i += length;
//         }
//         return result;
//     }
// };

// class Solution {

// public:

//     string encode(vector<string> &strs) {

//         string encoded = "";

//         for (string s : strs) {

//             encoded += to_string(s.size()) + "#" + s;

//         }

//         return encoded;

//     }

//     vector<string> decode(string &str) {

//         vector<string> result;

//         int i = 0;

//         while (i < str.size()) {

//             int j = i;

//             while (str[j] != '#') {

//                 j++;

//             }

//             int length = stoi(str.substr(i, j - i));

//             j++;

//             string word = str.substr(j, length);

//             result.push_back(word);

//             i = j + length;

//         }

//         return result;

//     }

// };

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