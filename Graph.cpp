#include <bits/stdc++.h>
using namespace std;
class Graph
{
private:
    bool directed;
    int V;
    int adj[100][100];
    bool visit[100];

public:
    Graph(int v, bool dir)
    {
        V = v;
        directed = dir;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                adj[i][j] == 0;
            }
        }
    }
    void addEdge(int u, int v)
    {
        adj[u][v] = 1;
        if (!directed)
        {
            adj[v][u] = 1;
        }
    }
    // BFS
    void init()
    {
        for (int i = 0; i < V; i++)
        {
            visit[i] = false;
        }
    }
    void BFS(int start)
    {
        stack<int> q;
        q.push(start);
        visit[start] = true;
        while (!q.empty())
        {
            int u = q.top();
            q.pop();
            cout << u << " ";
            for (int j = 0; j < V; j++)
            {
                if (adj[u][j] == 1 && !visit[j])
                {
                    q.push(j);
                    visit[j] = true;
                }
            }
        }
    }
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                cout << adj[i][j] << " ";
            }
        }
    }
};

int main()
{
    Graph g(7, false);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(2, 6);

    g.init();
    g.BFS(0);
}