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
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		REP(i, n)
		cin >> a[i];
		vector<int> dp;
		REP(i, n)
		{
			auto it = upper_bound(dp.begin(), dp.end(), a[i]);
			if (it == dp.end())
				dp.push_back(a[i]);
			else
				*it = a[i];
		}
		cout << n - dp.size() << endl;
	}
	return 0;
}