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
int n, m, u;
vector<int> dsk[1005];
vector<pair<int, int>> res;
bool vs[1005];
void DFS(int u)
{
    vs[u] = true;
    for (auto i : dsk[u])
    {
        if (!vs[i])
        {
            res.pb({u, i});
            DFS(i);
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
        cin >> n >> m >> u;
        FOR(i, 1, n)
        dsk[i].clear();
        res.clear();
        memset(vs, false, sizeof(vs));
        REP(i, m)
        {
            int x, y;
            cin >> x >> y;
            dsk[x].pb(y);
            dsk[y].pb(x);
        }
        DFS(u);
        if (res.size() == n - 1)
        {
            for (auto x : res)
                cout << x.fi << " " << x.se << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}