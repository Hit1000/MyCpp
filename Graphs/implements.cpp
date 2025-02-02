#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    // adjecency matrix
    int adj[n + 1][m + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    // adjecency list
    vector<int> ad[m + 1];
    for (int i = 0; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
}
/*
#include <iostream>
#include <vector>
#include <limits>

    using namespace std;

const int MAX_NODES = 1000;

int main()
{
    int n, m;
    cin >> n >> m;

    // Adjacency matrix
    int adj[n + 1][n + 1] = {0};
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    // Adjacency list
    vector<int> ad[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }

    // Example usage: print adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    // Example usage: print adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": ";
        for (int j = 0; j < ad[i].size(); j++)
        {
            cout << ad[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
}

return 0;
}*/