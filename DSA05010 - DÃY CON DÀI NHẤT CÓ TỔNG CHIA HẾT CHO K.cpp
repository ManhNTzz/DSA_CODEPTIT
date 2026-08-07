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
const long long mod = 1000000007;

// Cre by ManhNTzz

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            int n, k;
            cin >> n >> k;
            vector<int> a(n);
            REP(i, n)
            cin >> a[i];
            vector<int> dp(k, -1);
            dp[0] = 0;
            REP(i, n)
            {
                int val = a[i] % k;
                vector<int> next_dp = dp;

                for (int r = 0; r < k; ++r)
                {
                    if (dp[r] != -1)
                    {
                        int new_r = (r + val) % k;
                        next_dp[new_r] = max(next_dp[new_r], dp[r] + 1);
                    }
                }
                dp = next_dp;
            }

            cout << dp[0] << endl;
        }
    }
    return 0;
}