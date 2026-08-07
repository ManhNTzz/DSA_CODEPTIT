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
const int INF = 1e9;

// Cre by ManhNTzz

ll a[105][105], d[105][105];
int n, k;
void tinh(ll a[105][105], ll b[105][105])
{
    ll c[105][105] = {};
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
void mu(ll a[105][105], ll k)
{
    if (k == 1)
        return;
    mu(a, k / 2);
    tinh(a, a);
    if (k % 2 == 1)
        tinh(a, d);
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
        mu(a, k);
        FOR(i, 1, n)
        {
            FOR(j, 1, n)
            cout << a[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}