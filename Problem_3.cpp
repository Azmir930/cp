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
                adj[i][j] = 0;
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

    void init()
    {
        for (int i = 0; i < V; i++)
        {
            visit[i] = false;
        }
    }

    void BFSShortestPath(int start)
    {
        queue<int> q;
        vector<int> distance(V, -1);
        distance[start] = 0;
        visit[start] = true;
        q.push(start);

        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            for (int j = 0; j < V; j++)
            {
                if (adj[u][j] == 1 && !visit[j])
                {
                    visit[j] = true;
                    distance[j] = distance[u] + 1;
                    q.push(j);
                }
            }
        }

        cout << "Distance from " << start << ": [";
        for (int i = 0; i < V; i++)
        {
            cout << distance[i];
            if (i != V - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
};

int main()
{
    int V = 5;
    int E = 6;
    Graph g(V, false);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 4);

    g.init();
    g.BFSShortestPath(0);

    return 0;
}
