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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n + 1, vector<int>(m + 1));
        FOR(i, 1, n)
        {
            FOR(j, 1, m)
            cin >> a[i][j];
        }
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 1e9));
        FOR(i, 1, n)
        {
            FOR(j, 1, m)
            {
                if (i == 1 && j == 1)
                    dp[i][j] = a[i][j];
                else
                    dp[i][j] = min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]}) + a[i][j];
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}