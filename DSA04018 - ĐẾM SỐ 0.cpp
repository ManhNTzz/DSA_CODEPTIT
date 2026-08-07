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
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n;
		int cnt = 0;
		REP(i, n)
		{
			cin >> x;
			cnt += 1 - x;
		}
		cout << cnt << endl;
	}
	return 0;
}