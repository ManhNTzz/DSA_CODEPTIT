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
		string s, t;
		cin >> s >> t;

		int n = s.size(), m = t.size();
		int dp[105][105] = {};
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= m; j++)
			{
				if (i == 0 || j == 0)
					dp[i][j] = i + j;
				else if (s[i - 1] == t[j - 1])
					dp[i][j] = dp[i - 1][j - 1];
				else
					dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
			}
		}

		cout << dp[n][m] << endl;
	}
	return 0;
}