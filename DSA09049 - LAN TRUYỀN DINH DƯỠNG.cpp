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

int n;
vector<vector<int>> dske(200001);
vector<ll> dp(200001, 0);
vector<ll> M(200001, 0);

ll DFS(int u)
{
    ll sum = 1;
    for (int v : dske[u])
        sum += DFS(v);
    dp[u] = sum;
    return sum;
}

ll DFS2(int u)
{
    ll sum = 1;
    for (int v : dske[u])
        sum += DFS2(v) + dp[v];
    M[u] = sum;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        int j;
        cin >> j;
        dske[j].push_back(i);
    }

    DFS(1);
    DFS2(1);

    for (int i = 1; i <= n; i++)
        cout << M[i] << " ";
    return 0;
}
