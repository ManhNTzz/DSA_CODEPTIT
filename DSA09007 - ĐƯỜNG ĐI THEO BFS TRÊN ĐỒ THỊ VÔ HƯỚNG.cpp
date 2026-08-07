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
#define vll vector<long long>
#define pb push_back
const long long mod = 1000000007;

// Cre by ManhNTzz

int v, e, s, t;
vi dsk[1005];
bool vs[1005];
string res;
int ok;
void BFS(int u, string s)
{
    queue<pair<int, string>> qe;
    qe.push({u, s});
    vs[u] = true;
    while (!qe.empty())
    {
        int x = qe.front().fi;
        string tmp = qe.front().se;
        qe.pop();
        if (x == t)
        {
            res = tmp;
            ok = 0;
            break;
        }
        for (auto i : dsk[x])
        {
            if (!vs[i])
            {
                qe.push({i, tmp + " " + to_string(i)});
                vs[i] = true;
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
        cin >> v >> e >> s >> t;
        REP(i, 1005)
        dsk[i].clear();
        memset(vs, false, sizeof(vs));
        REP(i, e)
        {
            int x, y;
            cin >> x >> y;
            dsk[x].pb(y);
            dsk[y].pb(x);
        }
        ok = 1;
        BFS(s, to_string(s));
        if (ok)
            cout << -1 << endl;
        else
            cout << res << endl;
    }
    return 0;
}