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
		priority_queue<int> pq;
		int cnt[26] = {};
		for (char c : s)
			cnt[c - 'A']++;
		for (int x : cnt)
		{
			if (x > 0)
				pq.push(x);
		}
		while (k--)
		{
			int top = pq.top();
			pq.pop();
			pq.push(top - 1);
		}
		ll ans = 0;
		while (!pq.empty())
		{
			int num = pq.top();
			pq.pop();
			ans += (ll)num * num;
		}
		cout << ans << endl;
	}
	return 0;
}