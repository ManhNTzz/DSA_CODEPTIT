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

int n, m, ans;
int a[105][105];
void Try(int i, int j)
{
	if (i == m && j == n)
	{
		ans++;
		return;
	}
	if (i < m)
		Try(i + 1, j);
	if (j < n)
		Try(i, j + 1);
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
		cin >> m >> n;
		ans = 0;
		FOR(i, 1, m)
		FOR(j, 1, n)
		cin >> a[i][j];
		Try(1, 1);
		cout << ans << endl;
	}
	return 0;
}
