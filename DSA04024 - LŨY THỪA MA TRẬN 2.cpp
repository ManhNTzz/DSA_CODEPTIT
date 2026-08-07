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
#define ALLN(s) s.rbegin(), s.rend()
#define endl '\n'
#define maxn 10000007
const long long mod = 1000000007;

// Cre by ManhNTzz

int n, k;
ll a[11][11], d[11][11];
void Mul(ll a[11][11], ll b[11][11])
{
    ll c[11][11] = {};
    FOR(i, 1, n)
    FOR(j, 1, n)
    FOR(k, 1, n)
    {
        c[i][j] += a[i][k] * b[k][j];
        c[i][j] %= mod;
    }
    FOR(i, 1, n)
    FOR(j, 1, n)
    a[i][j] = c[i][j];
}
void Pow(ll a[11][11], int k)
{
    if (k == 1)
        return;
    Pow(a, k / 2);
    Mul(a, a);
    if (k % 2 == 1)
        Mul(a, d);
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
        cin >> n >> k;
        FOR(i, 1, n)
        FOR(j, 1, n)
        {
            cin >> a[i][j];
            d[i][j] = a[i][j];
        }
        Pow(a, k);
        ll ans = 0;
        FOR(i, 1, n)
        {
            ans += a[i][n];
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}
