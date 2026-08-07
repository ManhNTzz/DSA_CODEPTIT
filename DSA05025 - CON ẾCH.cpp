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
		int n;
		cin >> n;
		long long dp[n + 1] = {0};
		dp[0] = 1;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= 3; j++)
			{
				if (i >= j)
					dp[i] += dp[i - j];
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
}
