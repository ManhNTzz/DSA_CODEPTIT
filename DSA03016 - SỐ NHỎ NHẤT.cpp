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
	int T;
	cin >> T;
	while (T--)
	{
		int s, d;
		cin >> s >> d;
		if (s > 9 * d)
		{
			cout << -1 << endl;
			continue;
		}
		int a[d] = {1};
		s--;
		for (int i = d - 1; i >= 0; --i)
		{
			int x = min(s, 9 - a[i]);
			a[i] += x;
			s -= x;
		}
		REP(i, d)
		cout << a[i];
		cout << endl;
	}
	return 0;
}