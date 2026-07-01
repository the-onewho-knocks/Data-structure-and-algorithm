#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool is_sorted(const std::vector<T> &vec)
{
    return std::is_sorted(vec.begin(), vec.end());
}

// // 2. Check if a vector has all unique elements (No duplicates)
// // Time Complexity: O(N) | Space Complexity: O(N)
template <typename T>
bool is_unique(const std::vector<T> &vec)
{
    std::unordered_set<T> unique_set(vec.begin(), vec.end());
    return vec.size() == unique_set.size();
}

template <typename T>
T find_max_element(const std::vector<T> &vec)
{
    // Safety check: An empty vector has no maximum element
    if (vec.empty())
    {
        throw std::invalid_argument("Cannot find maximum of an empty vector.");
    }

    // std::max_element returns an iterator, so we use '*' to get the value
    return *std::max_element(vec.begin(), vec.end());
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 3, 2, 5};
    int k = 3;
    vector<int> ans;

    int left = 0;

    for(int right = 0 ; right < nums.size() ; ++right){
        int sum = right - left + 1;

        if(sum == k){

                if(nums[left] < nums[left+1]  && nums[left+1] < nums[right]){
                    ans.push_back(nums[right]);
                }
                else{
                    ans.push_back(-1);
                }

            ++left;
        }
    }


    for(int x : ans){
        cout<<x<<" ";
    }
    cout<<endl;
}



// int main()
// {
//     vector<int> nums = {1, 2, 3, 4, 3, 2, 5};
//     int k = 3;
//     vector<int> v;
//     vector<int> ans;
//     int j = 0;
//     for (int i = 0; i < k; ++i)
//     {
//         v.push_back(nums[i]);
//     }

//     if (is_sorted(v) && is_unique(v))
//     {
//         ans.push_back(find_max_element(v));
//     }
//     else
//     {
//         ans.push_back(-1);
//     }

//     for ( int i = k ; i < nums.size() ; ++i){

//     }

//     for (int x : ans)
//     {
//         cout << x << endl;
//     }
// }