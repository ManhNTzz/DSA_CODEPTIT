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
int V, E;
int a[1005][1005] = {};

bool BFS(int u, vector<int> dske[])
{
    vector<bool> vis(V + 1, false);
    vis[u] = true;

    queue<pair<int, int>> qe;
    qe.push({u, 0});

    while (!qe.empty())
    {
        auto v = qe.front().fi;
        auto w = qe.front().se;
        qe.pop();
        vis[v] = true;

        for (int t : dske[v])
        {
            if (!vis[t])
            {
                qe.push({t, w + a[v][t]});
            }
            else if (t == u && w + a[v][u] < 0)
                return true;
        }
    }

    return false;
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
        cin >> V >> E;
        vector<int> dske[V + 1];

        for (int i = 0; i < E; i++)
        {
            int x, y, w;
            cin >> x >> y >> w;
            dske[x].push_back(y);
            a[x][y] = w;
        }

        bool check = false;
        for (int i = 1; i <= V; i++)
        {
            check = check || BFS(i, dske);
            if (check)
                break;
        }
        cout << check << endl;
    }

    return 0;
}
