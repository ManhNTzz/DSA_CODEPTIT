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
		int n, V;
		cin >> n >> V;
		vector<pair<int, int>> a(n);
		REP(i, n)
		cin >> a[i].first;
		REP(i, n)
		cin >> a[i].second;
		ll dp[1005] = {0};
		REP(i, n)
		{
			for (int j = V; j >= a[i].first; j--)
			{
				dp[j] = max(dp[j - a[i].first] + a[i].second, dp[j]);
			}
		}
		cout << *max_element(dp, dp + V + 1) << endl;
	}
	return 0;
}
