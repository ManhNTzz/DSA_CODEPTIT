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

int k, n, m, a[1000];
bool vis[1001];
vector<int> dske[1001];

void DFS(int u)
{
    vis[u] = true;
    for (int v : dske[u])
    {
        if (!vis[v])
            DFS(v);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k >> n >> m;
    for (int i = 0; i < k; i++)
        cin >> a[i];

    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        memset(vis, false, sizeof(vis));
        DFS(i);

        int cnt = 0;
        for (int i = 0; i < k; i++)
            cnt += vis[a[i]];
        if (cnt == k)
            ans++;
    }

    cout << ans << endl;
    return 0;
}
