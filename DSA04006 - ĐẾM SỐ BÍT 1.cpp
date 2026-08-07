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

ll sz(ll n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return sz(n / 2) * 2 + 1;
}

ll cnt(ll n, ll L, ll R, ll left, ll right)
{
    if (R < left || L > right)
        return 0;
    if (n == 0)
        return 0;
    if (n == 1)
        return (L <= left && right <= R) ? 1 : 0;

    ll mid = left + sz(n / 2);
    ll res = 0;

    res += cnt(n / 2, L, R, left, mid - 1);

    if (L <= mid && mid <= R)
        res += (n % 2);

    res += cnt(n / 2, L, R, mid + 1, right);
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        ll size = sz(n);

        cout << cnt(n, l, r, 1, size) << endl;
    }

    return 0;
}