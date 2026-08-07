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
		int a[n];
		REP(i, n)
		cin >> a[i];
		int sum1 = 0;
		int sum2 = a[0];
		REP(i, n)
		{
			sum1 += a[i];
			sum2 = max(sum1, sum2);
			if (sum1 < 0)
				sum1 = 0;
		}
		cout << sum2 << endl;
	}
	return 0;
}
