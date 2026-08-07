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
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<ll> a(n);
		for (ll &x : a)
			cin >> x;

		stack<ll> st;
		int i = 0;

		ll ans = 0;
		while (i < n)
		{
			if (st.empty() || a[st.top()] <= a[i])
			{
				st.push(i);
				i++;
			}
			else
			{
				ll h = a[st.top()];
				st.pop();
				if (st.empty())
					ans = max(ans, h * i);
				else
					ans = max(ans, h * (i - st.top() - 1));
			}
		}

		while (!st.empty())
		{
			ll h = a[st.top()];
			st.pop();
			if (st.empty())
				ans = max(ans, h * n);
			else
				ans = max(ans, h * (n - st.top() - 1));
		}
		cout << ans << endl;
	}

	return 0;
}