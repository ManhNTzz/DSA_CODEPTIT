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
void BFS(int u)
{
    queue<int> qe;
    qe.push(u);
    vs[u] = true;
    while (!qe.empty())
    {
        int x = qe.front();
        qe.pop();
        cout << x << " ";
        for (auto i : dsk[x])
        {
            if (!vs[i])
            {
                qe.push(i);
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
        int v, e, u;
        cin >> v >> e >> u;
        REP(i, 1005)
        dsk[i].clear();
        memset(vs, false, sizeof(vs));
        REP(i, e)
        {
            int x, y;
            cin >> x >> y;
            dsk[x].pb(y);
        }
        BFS(u);
        cout << endl;
    }
    return 0;
}