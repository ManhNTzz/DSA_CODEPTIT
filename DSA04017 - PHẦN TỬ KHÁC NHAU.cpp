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
		ll a[n], b[n - 1];
		REP(i, n)
		cin >> a[i];
		REP(i, n - 1)
		cin >> b[i];
		int ok = 0, j;
		REP(i, n - 1)
		{
			if (a[i] != b[i])
			{
				ok = 1;
				j = i;
				break;
			}
		}
		if (ok)
		{
			cout << j + 1;
		}
		else
			cout << n;
		cout << endl;
	}
	return 0;
}
