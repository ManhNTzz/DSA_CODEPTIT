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

void binarySearch(ll a[], int n, ll x)
{
	int l = 0, r = n - 1;
	ll pos = -1;
	while (l <= r)
	{
		ll mid = (l + r) / 2;
		if (a[mid] <= x)
		{
			pos = mid + 1;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	cout << pos << endl;
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
		int n;
		ll x;
		cin >> n >> x;
		ll a[n];
		REP(i, n)
		cin >> a[i];
		binarySearch(a, n, x);
	}
	return 0;
}
