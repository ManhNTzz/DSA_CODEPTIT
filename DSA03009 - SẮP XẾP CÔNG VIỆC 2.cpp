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

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.se == b.se)
		return a.fi > b.fi;
	return a.se > b.se;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--)
	{
		int n, x, maxx = 0;
		cin >> n;
		vector<pair<int, int>> a(n);
		REP(i, n)
		{
			cin >> x >> a[i].fi >> a[i].se;
			maxx = max(maxx, a[i].fi);
		}
		sort(ALL(a), cmp);
		vector<bool> dd(maxx + 1, 0);
		pair<int, int> ans = {0, 0};
		REP(i, n)
		{
			for (int j = a[i].fi; j >= 1; --j)
			{
				if (!dd[j])
				{
					dd[j] = 1;
					ans.fi++;
					ans.se += a[i].se;
					break;
				}
			}
		}
		cout << ans.fi << " " << ans.se << endl;
	}
	return 0;
}
