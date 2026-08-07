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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        unordered_set<ll> se;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] *= a[i];
            se.insert(a[i]);
        }
        sort(a.begin(), a.end());
        bool ok = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (ok)
                break;
            for (int j = i + 1; j < n; j++)
            {
                if (se.count(a[i] + a[j]))
                    ok = true;
                if (ok)
                    break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}