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
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<pair<int, int>> a(n);
		REP(i, n)
		cin >> a[i].first >> a[i].second;
		sort(a.begin(), a.end(), cmp);
		int cnt = 1;
		int curTime = a[0].second;
		for (int i = 1; i < n; i++)
		{
			if (a[i].first >= curTime)
			{
				curTime = a[i].second;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}