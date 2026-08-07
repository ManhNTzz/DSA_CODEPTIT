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

ll dtich(ll s[], int n, int m)
{
	stack<int> st;
	int i = 1;
	ll ans = 0;
	while (i <= m)
	{
		if (st.empty() || s[i] >= s[st.top()])
			st.push(i++);
		else
		{
			ll doc = st.top();
			st.pop();
			if (st.empty())
			{
				ans = max(ans, (ll)s[doc] * (i - 1));
			}
			else
				ans = max(ans, (ll)s[doc] * (i - st.top() - 1));
		}
	}
	while (!st.empty())
	{
		ll doc = st.top();
		st.pop();
		if (st.empty())
		{
			ans = max(ans, (ll)s[doc] * m);
		}
		else
			ans = max(ans, (ll)s[doc] * (m - st.top()));
	}
	return ans;
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
		int n, m;
		cin >> n >> m;
		int a[505][505];
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> a[i][j];
			}
		}
		ll s[505][505];
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (i == 1)
					s[i][j] = a[i][j];
				else if (a[i][j] == 0)
					s[i][j] = 0;
				else
					s[i][j] = s[i - 1][j] + 1;
			}
		}
		ll ans = 0;
		for (int i = 1; i <= n; i++)
		{
			ans = max(ans, dtich(s[i], n, m));
		}
		cout << ans << endl;
	}
	return 0;
}