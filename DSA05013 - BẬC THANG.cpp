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
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int dp[n + 1] = {0};
		dp[0] = 1;
		FOR(i, 1, n)
		{
			FOR(j, 1, k)
			{
				if (i >= j)
					dp[i] = (dp[i] + dp[i - j]) % MOD;
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
}
