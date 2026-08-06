#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
    }
};

int main()
{
    Solution sol;
    string s1 = "ab";
    string s2 = "eidbaooo";

    unordered_map<char, int> find;
    unordered_map<char, int> window;

    for (auto x : s1)
        find[x]++;

   // for (auto x : find)cout << x.first << " -> " << x.second<<endl;

    int k = find.size();

    for (int i = 0; i < k; ++i)
    {
        window[s2[i]]++;
    }

    if(find == window) cout<<"true";

   // for(auto x : window)cout << x.first << " -> " << x.second<<endl;

   for(int i = k ; i < s2.size() ; ++i){

        window[s2[i]]++;

        window[s2[i - k]]--;

        if(window[s2[i - k]]==0){
            window.erase(s2[ i -k]);
        }

        if(find == window){
            cout<<"true";
        }

   }

   cout<<"false";

}

/*
        sort(s1.begin(), s1.end());

        unordered_set<string> st;

        do
        {
            st.insert(s1);
        } while (next_permutation(s1.begin(), s1.end()));

        for (auto &i : st)
        {
            if (s2.find(i) != string::npos)
            {
                return true;
                break;
            }
        }

        return false;
    }
*/

// int main()
// {
//     string s = "dcda";
//     string s1 = "adc";

//     // sort(s.begin() , s.end());

//     unordered_set<string> st;

//     do
//     {
//         st.insert(s1);
//     } while (next_permutation(s1.begin(), s1.end()));

//     for (string x : st)
//         cout << x << endl;

//     bool found = false;

//     for (auto &i : st)
//     {
//         if (s.contains(i))
//         {
//             found = true;
//             break; // Exit loop early once matched
//         }
//     }

//     std::cout << std::boolalpha << found << std::endl;

// for (int i = 1; i < s.size(); ++i)
// {

//     string ok = string() +s[i] - s[left] + 1;

//     cout << ok << endl;

//     if (st.find(ok) != st.end())
//     {
//         cout << "true";
//         break;
//     }

//     left++;
// }

//   cout<<"false";
