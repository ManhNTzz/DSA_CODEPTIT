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
#define endl '\n'
#define maxn 10000007

// Cre by ManhNTzz

vector<int> a, b, c;
int n, k, ans = 0;
void solve()
{
	vector<int> tmp = c;
	sort(ALL(tmp));
	if (tmp == c)
		ans++;
}
void Try(int i)
{
	for (int j = b[i - 1] + 1; j <= n - k + i; ++j)
	{
		b[i] = j;
		c[i] = a[b[i]];
		if (i == k)
			solve();
		else
			Try(i + 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	a.resize(n + 1);
	b.resize(k + 1, 0);
	c.resize(k + 1, 0);
	FOR(i, 1, n)
	cin >> a[i];
	Try(1);
	cout << ans;
	return 0;
}
