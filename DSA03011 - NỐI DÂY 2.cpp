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
		priority_queue<ll, vector<ll>, greater<ll>> pq;
		int n;
		cin >> n;
		FOR(i, 1, n)
		{
			ll x;
			cin >> x;
			pq.push(x);
		}
		ll sum2 = 0;
		while (pq.size() >= 2)
		{
			int x = pq.top();
			pq.pop();
			int y = pq.top();
			pq.pop();
			ll z = (x + y) % mod;
			sum2 = (sum2 + z) % mod;
			pq.push(z);
		}
		cout << sum2 << endl;
	}
	return 0;
}
