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

int f[101][101][101];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		int n, m, k, res = 0;
		cin >> n >> m >> k;
		string x, y, z;
		cin >> x >> y >> z;
		memset(f, 0, sizeof(f));
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				for (int l = 1; l <= k; ++l)
				{
					if (x[i - 1] == y[j - 1] && x[i - 1] == z[l - 1])
						f[i][j][l] = f[i - 1][j - 1][l - 1] + 1;
					else
						f[i][j][l] = max({f[i - 1][j][l], f[i][j - 1][l], f[i][j][l - 1]});
					res = max(res, f[i][j][l]);
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
