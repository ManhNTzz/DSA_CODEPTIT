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

ll get_mincost(ll m)
{
    if (m == 0)
        return 0;
    ll q = m / 5;
    ll rem = m % 5;
    ll res = (rem == 0 ? q : q + 1);
    if (rem == 4)
        res++;
    return res;
}

ll get_minways(ll m)
{
    if (m == 0)
        return 1;
    ll q = m / 5;
    ll rem = m % 5;
    if (rem == 0)
        return 1;
    if (rem == 1)
        return (q == 0 ? 1 : 2);
    if (rem == 2 || rem == 3)
        return 1;
    // rem == 4
    return (q == 0 ? 2 : 3);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        ll W;
        int c;
        cin >> W;
        cin >> c;
        if (W % 1000 != 0)
        {
            cout << 0 << '\n';
            continue;
        }
        ll ww = W / 1000;
        ll minb = 0;
        ll nways = 1;
        ll cur = ww;
        for (int k = 0; k < c; k++)
        {
            ll x = cur % 10;
            minb += get_mincost(x);
            nways *= get_minways(x);
            cur /= 10;
        }
        ll x = cur;
        minb += get_mincost(x);
        nways *= get_minways(x);
        cout << minb << " " << nways << '\n';
    }
    return 0;
}