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
        int N;
        cin >> N;
        vector<vector<int>> a(4, vector<int>(N));
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < N; j++)
                cin >> a[i][j];
        // Tạo mask hợp lệ
        vector<int> valid;
        for (int mask = 0; mask < (1 << 4); mask++)
        {
            if ((mask & (mask << 1)) == 0)
                valid.push_back(mask);
        }

        int M = valid.size();
        // precompute giá trị từng mask ở mỗi cột
        vector<vector<ll>> val(N, vector<ll>(M, 0));
        for (int j = 0; j < N; j++)
        {
            for (int i = 0; i < M; i++)
            {
                int mask = valid[i];
                ll sum = 0;
                for (int r = 0; r < 4; r++)
                {
                    if (mask & (1 << r))
                        sum += a[r][j];
                }
                val[j][i] = sum;
            }
        }
        // DP
        vector<vector<ll>> dp(N, vector<ll>(M, LLONG_MIN));

        // cột đầu
        for (int i = 0; i < M; i++)
        {
            dp[0][i] = val[0][i];
        }
        // các cột sau
        for (int j = 1; j < N; j++)
        {
            for (int i = 0; i < M; i++)
            {
                for (int k = 0; k < M; k++)
                {
                    if ((valid[i] & valid[k]) == 0)
                    {
                        dp[j][i] = max(dp[j][i], dp[j - 1][k] + val[j][i]);
                    }
                }
            }
        }
        ll ans = 0;
        for (int i = 0; i < M; i++)
            ans = max(ans, dp[N - 1][i]);

        cout << ans << endl;
    }
    return 0;
}
