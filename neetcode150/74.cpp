#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int left = 0;
        int right = rows * cols  -1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            int row = mid / cols;
            int col = mid % cols;

            if(matrix[row][col] == target){
                return true;
            }

            if(matrix[row][col] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return false;


    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix = { {1,3,5,7} , {10,11,16,20} ,{23,30,34,60}};
    int target = 3;

    cout<<sol.searchMatrix(matrix , target)<<endl;
}

        // brute force
        // int n = matrix.size();

        // for(int row = 0 ; row < n ; ++row){
        //     for(int col = 0 ; col < matrix[0].size() ; ++col){
        //         if(matrix[row][col] == target){
        //             return true;
        //         }
        //     }
        // }

        // return false;