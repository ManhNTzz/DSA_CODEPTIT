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
#define endl '\n'
#define maxn 10000007

// Cre by ManhNTzz

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        multiset<int> v;
        REP(i, n)
        {
            cin >> a[i];
            v.insert(a[i]);
        }
        REP(i, m)
        {
            cin >> b[i];
            v.insert(b[i]);
        }
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
