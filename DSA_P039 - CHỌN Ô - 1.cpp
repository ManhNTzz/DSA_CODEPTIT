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
const long long NEG_INF = -1e18;

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
        int n;
        cin >> n;
        vector<vector<long long>> a(n, vector<long long>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        int maxMask = 1 << n;
        vector<long long> dp(maxMask, NEG_INF);
        dp[0] = 0;
        for (int mask = 0; mask < maxMask; mask++)
        {
            int row = __builtin_popcount(mask); // đang xét hàng row
            if (row >= n)
                continue;
            for (int col = 0; col < n; col++)
            {
                if (!(mask & (1 << col)))
                {
                    int newMask = mask | (1 << col);
                    dp[newMask] = max(dp[newMask], dp[mask] + a[row][col]);
                }
            }
        }
        cout << dp[maxMask - 1] << endl;
    }
    return 0;
}