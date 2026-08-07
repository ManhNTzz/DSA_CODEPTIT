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
const long long mod = 1000000007;

// Cre by ManhNTzz

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		pair<int, int> a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i].first;
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i].second;
		}
		sort(a, a + n, cmp);
		int ans = 1, now = a[0].second;
		for (int i = 1; i < n; ++i)
		{
			if (a[i].first >= now)
			{
				ans++;
				now = a[i].second;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
