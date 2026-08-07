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
		int seven = n / 7;
		int four = n % 7;
		while (four % 4 != 0 && seven > 0 && four <= 28)
		{
			seven--;
			four += 7;
		}
		if (four % 4 == 0)
			four /= 4;
		else
		{
			cout << -1 << endl;
			continue;
		}
		while (four--)
			cout << 4;
		while (seven--)
			cout << 7;
		cout << endl;
	}
	return 0;
}
