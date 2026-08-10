#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Unweighted graph
    vector<vector<int>> graph(n);

    // Weighted graph
    vector<vector<pair<int, int>>> graph(n);

    // Visited
    vector<bool> visited(n, false);

    // BFS
    queue<int> q;

    // Iterative DFS
    stack<int> st;

    // Distance
    vector<int> dist(n, INT_MAX);

    // Parent
    vector<int> parent(n, -1);
}