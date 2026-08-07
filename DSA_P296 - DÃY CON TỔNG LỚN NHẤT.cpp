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
const long long MOD = 1000000007;

// Cre by ManhNTzz

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, q;
	cin >> n >> q;
	vector<ll> pref(n + 1, 0);
	FOR(i, 1, n)
	{
		ll x;
		cin >> x;
		pref[i] = pref[i - 1];
		if (x > 0)
			pref[i] += x;
	}

	while (q--)
	{
		int l, r;
		cin >> l >> r;
		cout << pref[r] - pref[l - 1] << endl;
	}
	return 0;
}