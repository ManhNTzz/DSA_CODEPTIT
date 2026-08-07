#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for (int i = (b); i >= (a); --i)
#define ll long long
#define se second
#define fi first
#define len length()
#define ALL(s) s.begin(), s.end()
#define vi vector<int>
#define vb vector<bool>
#define vll vector<long long>
#define pb push_back
const long long mod = 1000000007;

// Cre by ManhNTzz

const int INF = 1e9;
int V, E, st;
vector<int> dske[1005];
bool vis[1005];

void BFS(int u, vector<pair<int, int>> &res)
{
    queue<int> qe;
    qe.push(st);

    vis[st] = true;

    while (!qe.empty())
    {
        int u = qe.front();
        qe.pop();

        for (int v : dske[u])
        {
            if (!vis[v])
            {
                res.push_back({u, v});
                qe.push(v);
                vis[v] = true;
            }
        }
    }
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
        cin >> V >> E >> st;

        for (int i = 1; i <= V; i++)
            dske[i].clear();

        for (int i = 1; i <= E; i++)
        {
            int x, y;
            cin >> x >> y;
            dske[x].push_back(y);
            dske[y].push_back(x);
        }

        memset(vis, false, sizeof(vis));
        vector<pair<int, int>> res;
        BFS(st, res);

        if (res.size() == V - 1)
        {
            for (auto v : res)
                cout << v.fi << " " << v.se << endl;
        }
        else
            cout << "-1" << endl;
    }
}
