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
		int n;
		cin >> n;
		vector<int> a(n);
		for (int &x : a)
			cin >> x;
		if (n == 1)
			cout << a[0] << endl;
		else if (n == 2)
		{
			cout << max(a[0], a[1]) << endl;
		}
		else
		{
			vector<int> dp(n + 1, 0);
			dp[0] = a[0];
			dp[1] = a[1];
			dp[2] = a[0] + a[2];
			for (int i = 3; i < n; i++)
			{
				dp[i] = a[i] + max(dp[i - 2], dp[i - 3]);
			}
			cout << *max_element(dp.begin(), dp.end()) << endl;
		}
	}
	return 0;
}