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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n + 1), dp(s + 1, 0);
        FOR(i, 1, n)
        cin >> a[i];
        dp[0] = 1;
        FOR(i, 1, n)
        {
            for (int j = s; j >= a[i]; j--)
            {
                if (dp[j - a[i]])
                    dp[j] = 1;
            }
        }
        if (dp[s])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}