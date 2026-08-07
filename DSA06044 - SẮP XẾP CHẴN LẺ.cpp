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

// Cre by ManhNTzz

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a, b, c;
    a.resize(n);
    REP(i, n)
    {
        cin >> a[i];
        if (i % 2 == 0)
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    sort(ALL(b));
    sort(ALLN(c));
    int m = min(b.size(), c.size());
    for (int i = 0; i < m; ++i)
    {
        cout << b[i] << " " << c[i] << " ";
    }
    if (b.size() > c.size())
        cout << b.back();
    return 0;
}