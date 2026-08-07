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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        vector<int> dp1(n, 1), dp2(n, 1);
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
                dp1[i] = dp1[i - 1] + 1;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
                dp2[i] = dp2[i + 1] + 1;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, dp1[i] + dp2[i] - 1);
        }
        cout << ans << endl;
    }
    return 0;
}