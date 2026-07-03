#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matches = {
        {1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}};

    unordered_map<int , int> lst;

    vector<int> oneMatch;
    vector<int> zeroMatch;

    for(int x = 0 ; x < matches.size() ; ++x){
        int loser = matches[x][1];

        lst[loser]++;
    }

    for(int i = 0 ; i < matches.size() ; ++i){

        int winner = matches[i][0];
        int loser = matches[i][1];

        if(lst.find(winner) == lst.end()){
            zeroMatch.push_back(winner);
            lst[winner]= 2;
        }

        if(lst[loser] == 1){
            oneMatch.push_back(loser);
        }
    }
    
    // for(auto x : lst){
    //     cout<<x.first << " -> "<<x.second<<endl;
    // }

}