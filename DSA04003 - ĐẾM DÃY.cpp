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

ll n;
ll tinh(ll n, ll k)
{
	if (k == 0)
		return 1;
	ll pt = tinh(n, k / 2);
	ll ans = (pt * pt) % 123456789;
	if (k % 2 == 1)
		ans = (ans * n) % 123456789;
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
		cout << tinh(2, n - 1) << endl;
	}
	return 0;
}