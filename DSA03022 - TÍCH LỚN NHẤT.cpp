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
	int t = 1; // hoặc dùng cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<ll> a(n);
		for (ll &x : a)
			cin >> x;
		sort(a.begin(), a.end());
		cout << max({a[0] * a[1], a[n - 1] * a[n - 2],
					 a[0] * a[1] * a[n - 1], a[n - 3] * a[n - 2] * a[n - 1]});
	}
	return 0;
}