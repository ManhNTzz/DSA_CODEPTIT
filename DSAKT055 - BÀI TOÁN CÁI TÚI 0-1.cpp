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
#define vi vector<int>
#define vb vector<bool>
#define vll vector<long long>
#define pb push_back
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
		int n, W;
		cin >> n >> W;
		vector<pair<int, int>> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i].first;
		for (int i = 0; i < n; i++)
			cin >> a[i].second;
		vector<int> dp(W + 1, 0);
		for (int i = 0; i < n; i++)
		{
			for (int j = W; j >= a[i].first; j--)
			{
				dp[j] = max(dp[j], dp[j - a[i].first] + a[i].second);
			}
		}
		cout << *max_element(dp.begin(), dp.end()) << endl;
	}
	return 0;
}
