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
		int n, x, y, z;
		cin >> n >> x >> y >> z;
		int dp[n + 1] = {};
		dp[1] = x;
		for (int i = 2; i <= n + 1; i++)
		{
			if (i % 2 == 0)
				dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
			else
				dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + z);
		}
		cout << dp[n] << endl;
	}
	return 0;
}