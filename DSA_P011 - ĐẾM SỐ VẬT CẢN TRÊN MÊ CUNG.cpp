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

// Cre by ManhNTzz

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
char a[1005][1005];
int n, m;
void loang(int i, int j)
{
	a[i][j] = '.';
	for (int k = 0; k < 4; ++k)
	{
		int i1 = i + dx[k], j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '#')
		{
			loang(i1, j1);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	int ans = 0;
	REP(i, n)
	{
		REP(j, m)
		cin >> a[i][j];
	}
	REP(i, n)
	{
		REP(j, m)
		{
			if (a[i][j] == '#')
			{
				ans++;
				loang(i, j);
			}
		}
	}
	cout << ans;
	return 0;
}