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
const long long MOD = 1000000007;

// Cre by ManhNTzz

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));

        for (int i = 1; i <= 9; i++)
            dp[1][i] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                for (int l = j; l <= k; l++)
                {
                    dp[i][l] = (dp[i][l] + dp[i - 1][l - j]) % MOD;
                }
            }
        }
        cout << dp[n][k] << endl;
    }

    return 0;
}
