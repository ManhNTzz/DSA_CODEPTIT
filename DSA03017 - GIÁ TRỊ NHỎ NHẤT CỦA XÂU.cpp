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
		int k;
		cin >> k;
		string s;
		cin >> s;
		int dd[127] = {};
		for (char i : s)
			dd[i]++;
		priority_queue<int> q;
		for (int i : dd)
		{
			if (i > 0)
				q.push(i);
		}
		while (k--)
		{
			if (q.empty())
				break;
			int x = q.top();
			q.pop();
			x--;
			q.push(x);
		}
		ll ans = 0;
		while (!q.empty())
		{
			ll x = q.top();
			q.pop();
			ans += x * x;
		}
		cout << ans << endl;
	}
	return 0;
}
