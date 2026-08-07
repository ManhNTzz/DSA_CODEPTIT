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
#define vi vector<int>
#define vb vector<bool>
#define vll vector<long long>
#define pb push_back
const long long mod = 1000000007;
const int INF = 1e9;

// Cre by ManhNTzz

ll n, r;
ll tinh(ll n, ll r)
{
	if (r == 0)
		return 1;
	ll pt = tinh(n, r / 2);
	ll ans = (pt * pt) % mod;
	if (r % 2 == 1)
		ans = (ans * n) % mod;
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
		cin >> n;
		ll a = n;
		r = 0;
		while (n > 0)
		{
			r = r * 10 + n % 10;
			n /= 10;
		}
		cout << tinh(a, r) << endl;
	}
	return 0;
}