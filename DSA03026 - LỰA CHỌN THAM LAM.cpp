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

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, s;
	cin >> n >> s;
	int v = s;
	if (s == 0 && n > 1)
	{
		cout << -1 << " " << -1;
		return 0;
	}
	if (s > 9 * n)
	{
		cout << -1 << " " << -1;
		return 0;
	}
	int a[n] = {1};
	s--;
	for (int i = n - 1; i >= 0; --i)
	{
		int x = min(s, 9 - a[i]);
		a[i] += x;
		s -= x;
	}
	REP(i, n)
	cout << a[i];
	cout << " ";
	int b[n] = {0};
	for (int i = 0; i < n; ++i)
	{
		int x = min(v, 9);
		b[i] = x;
		v -= x;
	}
	REP(i, n)
	cout << b[i];
	return 0;
}