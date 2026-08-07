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
		int n;
		cin >> n;
		queue<pair<int, int>> qe;
		qe.push({n, 0});

		unordered_map<int, bool> mp;
		mp[n] = true;

		int ans = INT_MAX;

		while (!qe.empty())
		{
			auto [val, cnt] = qe.front();
			qe.pop();

			if (val == 1)
			{
				ans = min(ans, cnt);
				break;
			}

			if (!mp[val - 1])
			{
				mp[val - 1] = true;
				qe.push({val - 1, cnt + 1});
			}

			for (int i = 2; i <= sqrt(val); i++)
			{
				if (val % i == 0 && !mp[val / i])
				{
					mp[val / i] = true;
					qe.push({val / i, cnt + 1});
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}