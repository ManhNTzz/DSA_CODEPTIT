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

void Floyd(int V, vector<vector<ll>> &a)
{
    for (int i = 1; i <= V; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            for (int k = 1; k <= V; k++)
            {
                if (a[j][i] != LLONG_MAX && a[i][k] != LLONG_MAX)
                {
                    a[j][k] = min(a[j][k], a[j][i] + a[i][k]);
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int V, E;
    cin >> V >> E;
    vector<vector<ll>> a(V + 1, vector<ll>(V + 1, LLONG_MAX));
    for (int i = 1; i <= V; i++)
        a[i][i] = 0;
    for (int i = 1; i <= E; i++)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        a[x][y] = w;
        a[y][x] = w;
    }
    Floyd(V, a);
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (a[x][y] == LLONG_MAX)
            cout << "-1" << endl;
        else
            cout << a[x][y] << endl;
    }
    return 0;
}
