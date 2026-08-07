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
const long long mod = 1000000007;

// Cre by ManhNTzz

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k || ok == true)
                break;
            for (int j = i + 1; j < n; j++)
            {
                auto it = lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]);
                if (it != a.end() && a[i] + a[j] + *it == k)
                {
                    ok = true;
                    break;
                }
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
