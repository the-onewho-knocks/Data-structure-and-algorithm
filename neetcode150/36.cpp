#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int row = 0; row < 9; row++) {

            for (int col = 0; col < 9; col++) {

                char digit = board[row][col];

                if (digit == '.')
                    continue;

                int box = (row / 3) * 3 + (col / 3);
                cout<<box<<endl;

                if (rows[row].count(digit) ||
                    cols[col].count(digit) ||
                    boxes[box].count(digit)) {

                    return false;
                }

                rows[row].insert(digit);
                cols[col].insert(digit);
                boxes[box].insert(digit);
            }
        }

        return true;
    }
};

int main() {

    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    Solution solution;

    bool result = solution.isValidSudoku(board);

    if (result) {
        cout << "Valid Sudoku" << endl;
    }
    else {
        cout << "Invalid Sudoku" << endl;
    }

    return 0;
}

// int main()
// {
//     vector<vector<char>> board = {
//         {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
//         {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
//         {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//         {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
//         {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
//         {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//         {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
//         {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//         {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
//     };

//     for (int row = 0; row < 9; ++row)
//     {

//         for (int col = 0; col < 9; ++col)
//         {
//             cout<< board[row][col];
//             char digit = board[row][col];
//             cout<<digit;
//             if(digit == '.'){
//                 continue;
//             }
//          }
//     }
// }