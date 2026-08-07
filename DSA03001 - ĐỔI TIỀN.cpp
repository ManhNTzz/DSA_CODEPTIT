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
		int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
		int n;
		cin >> n;
		ll ans = 0;
		FOD(i, 0, 9)
		{
			ans += n / a[i];
			n %= a[i];
		}
		cout << ans << endl;
	}
	return 0;
}