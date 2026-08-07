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

bool DFS(vi dsk[], int u, vi &trang_thai)
{
    trang_thai[u] = 1;
    for (auto i : dsk[u])
    {
        if (trang_thai[i] == 0)
        {
            if (DFS(dsk, i, trang_thai))
                return true;
        }
        else if (trang_thai[i] == 1)
        {
            return true;
        }
    }
    trang_thai[u] = 2;
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
        vi trang_thai(v + 10);
        REP(i, e)
        {
            int x, y;
            cin >> x >> y;
            dsk[x].pb(y);
        }
        bool check = false;
        FOR(i, 1, v)
        {
            if (trang_thai[i] == 0)
            {
                if (DFS(dsk, i, trang_thai))
                {
                    check = true;
                    break;
                }
            }
        }
        if (check)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}