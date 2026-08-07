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
		int n;
		cin >> n;
		ll a[n + 1], f[n + 1] = {};
		for (int i = 1; i <= n; ++i)
		{
			cin >> a[i];
			if (i == 1)
				f[i] = a[i];
			if (i >= 2)
				f[i] = max(f[i - 1], f[i - 2] + a[i]);
		}
		cout << *max_element(f + 1, f + 1 + n) << endl;
	}
	return 0;
}
