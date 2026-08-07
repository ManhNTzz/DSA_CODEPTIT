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

string res;
bool DFS(vi dsk[], int u, int parent, vb &vs, string s)
{
    vs[u] = true;
    for (auto i : dsk[u])
    {
        if (!vs[i])
        {
            if (DFS(dsk, i, u, vs, s + " " + to_string(i)))
                return true;
        }
        else if (i != parent && i == 1)
        {
            res = s;
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
        int v, e;
        cin >> v >> e;
        vi dsk[v + 10];
        vb vs(v + 10);
        REP(i, e)
        {
            int x, y;
            cin >> x >> y;
            dsk[x].pb(y);
            dsk[y].pb(x);
        }
        res = "";
        FOR(i, 1, v)
        {
            sort(ALL(dsk[i]));
        }
        if (DFS(dsk, 1, -1, vs, "1"))
            cout << res << " 1" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}