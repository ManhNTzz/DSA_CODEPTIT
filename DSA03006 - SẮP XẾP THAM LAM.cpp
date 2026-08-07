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
		int a[100];
		FOR(i, 1, n)
		cin >> a[i];
		int ok = 1;
		FOR(i, 1, n)
		{
			if (a[i] != i && a[i] != n - i + 1)
			{
				cout << "No" << endl;
				ok = 0;
				break;
			}
		}
		if (ok)
			cout << "Yes" << endl;
	}
	return 0;
}
