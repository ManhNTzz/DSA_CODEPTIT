#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for (int i = (b); i >= (a); --i)
#define ll long long
#define se second
#define fi first
#define ALL(s) s.begin(), s.end()
#define ALLN(s) s.rbegin(), s.rend()
const long long mod = 1000000007;

// Cre by ManhNTzz

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        vector<int> dp(k + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= k; i++)
        {
            for (int x : a)
            {
                if (i >= x)
                    dp[i] = (dp[i] + dp[i - x]) % mod;
            }
        }
        cout << dp[k] << endl;
    }
    return 0;
}