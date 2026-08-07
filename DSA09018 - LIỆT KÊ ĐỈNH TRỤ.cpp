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

vector<int> dsk[1005];
bool vs[1005];
int v, e;
void DFS(int u)
{
    vs[u] = true;
    for (auto i : dsk[u])
    {
        if (!vs[i])
        {
            DFS(i);
        }
    }
}
int demtplt()
{
    int cnt = 0;
    FOR(i, 1, v)
    {
        if (vs[i])
            continue;
        DFS(i);
        cnt++;
    }
    return cnt;
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
        cin >> v >> e;
        memset(vs, false, sizeof(vs));
        REP(i, 1005)
        dsk[i].clear();
        REP(i, e)
        {
            int x, y;
            cin >> x >> y;
            dsk[x].pb(y);
            dsk[y].pb(x);
        }
        int dem = demtplt();
        FOR(i, 1, v)
        {
            memset(vs, false, sizeof(vs));
            vs[i] = true;
            if (dem < demtplt())
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
