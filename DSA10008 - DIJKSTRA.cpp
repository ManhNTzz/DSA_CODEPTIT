#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define pb push_back
const int INF = 1e9;

// Cre by ManhNTzz

struct Edge
{
    int v, w;
};
int V, E, start_node;
vector<Edge> adj[1005];
int dist[1005];
void dijkstra(int s)
{
    FOR(i, 1, V)
    dist[i] = INF;
    dist[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    while (!pq.empty())
    {
        auto top = pq.top();
        pq.pop();
        int d = top.first;
        int u = top.second;
        if (d > dist[u])
            continue;
        for (auto edge : adj[u])
        {
            int v = edge.v;
            int w = edge.w;
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}
void solve()
{
    cin >> V >> E >> start_node;
    FOR(i, 1, V)
    adj[i].clear();
    REP(i, E)
    {
        int x, y, z;
        cin >> x >> y >> z;
        adj[x].pb({y, z});
        adj[y].pb({x, z});
    }
    dijkstra(start_node);
    FOR(i, 1, V)
    {
        cout << dist[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}