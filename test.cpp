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

// int main()
// {
//     vector<string> str = {"lint", "code", "love", "you"};

//     // encode
//     string encode = "";
//     for (string s : str)
//     {
//         string lenstr = to_string(s.length());
//         lenstr = string(4 - lenstr.length(), '0') + lenstr;
//         encode += lenstr + s;
//     }

//     // cout << encode;

//     // decode
//     vector<string> result;
//     int i = 0;
//     int n = encode.size();

//     while (i < n)
//     {
//         int length = stoi(encode.substr(i, 4));
//         i = i + 4;
//         string word = encode.substr(i, length);
//         result.push_back(word);
//         i += length;
//     }

//     for (auto x : result)
//         cout << x << endl;
// }