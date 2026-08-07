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
const long long MOD = 1000000007;

// Cre by ManhNTzz

int main()
{
	ll C[1001][1001] = {0};
	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				C[i][j] = 1;
			else
				C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD;
		}
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		cout << C[n][k] << endl;
	}
	return 0;
}
