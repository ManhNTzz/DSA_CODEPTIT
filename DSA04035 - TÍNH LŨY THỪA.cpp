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
#define endl '\n'
#define maxn 10000007
const long long mod = 1e9 + 7;

// Cre by ManhNTzz

ll n, k;
ll Pow(ll n, ll k)
{
	if (k == 0)
		return 1;
	ll tmp = Pow(n, k / 2);
	ll res = (tmp * tmp) % mod;
	if (k & 1)
		res = (res * n) % mod;
	return res;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T = 20;
	while (T--)
	{
		cin >> n >> k;
		if (n == 0 && k == 0)
			break;
		cout << Pow(n, k) << endl;
	}
	return 0;
}
