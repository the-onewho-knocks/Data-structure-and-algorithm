#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct Compare
    {
        bool operator()(const pair<string, int> &a,
                        const pair<string, int> &b)
        {

            if (a.second == b.second)
            {
                return a.first > b.first;
            }

            return a.second < b.second;
        }
    };

    vector<string> topKfrequent(vector<string> &words, int k)
    {

        unordered_map<string, int> mp;

        for (string word : words)
        {
            mp[word]++;
        }

        priority_queue<
            pair<string, int>,
            vector<pair<string, int>>,
            Compare>
            pq;

        for (auto x : mp)
        {
            pq.push({x.first, x.second});
        }

        vector<string> ans;

        while (k--)
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }

        return ans;
    }
};

int main()
{
    vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    int k = 2;

    struct Compare
    {
        bool operator()(const pair<string, int> &a,
                        const pair<string, int> &b)
        {

            if (a.second == b.second)
            {
                return a.first > b.first;
            }

            return a.second < b.second;
        }
    };

    unordered_map<string, int> mp;

    for (auto x : words)
    {
        mp[x]++;
    }

    // for (auto const &[key, value] : mp)
    // {
    //     cout << key << " : " << value << endl;
    // }

    // priority_queue<pair<int, string>> pq;

    // for (auto x : mp)
    // {
    //     pq.emplace(x.second, x.first);
    // }

    // while (!pq.empty())
    // {
    //     auto [freq, word] = pq.top();          // Unpack the pair
    //     cout << word << " : " << freq << endl; // Print individual pieces
    //     pq.pop();
    // }
    // vector<string> ans;

    // while (k--)
    // {
    //     ans.push_back(pq.top().second);
    //     pq.pop();
    // }
}