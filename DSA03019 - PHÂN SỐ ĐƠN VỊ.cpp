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
		ll p, q;
		cin >> p >> q;
		while (true)
		{
			if (q % p == 0)
			{
				cout << "1/" << q / p;
				break;
			}
			ll x = q / p + 1;
			cout << "1/" << x << " + ";
			p = p * x - q;
			q *= x;
		}
		cout << endl;
	}
	return 0;
}