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
#define vi vector<int>
#define vb vector<bool>
#define vll vector<long long>
#define pb push_back
const long long mod = 1000000007;

// Cre by ManhNTzz

const int INF = 1e9;
int n, m, p;
int a[105][105];
int mau[105];
bool check(int u, int c)
{
	FOR(i, 1, n)
	{
		if (a[u][i] && mau[i] == c)
			return false;
	}
	return true;
}
bool Try(int i)
{
	if (i > n)
		return true;
	FOR(j, 1, p)
	{
		if (check(i, j))
		{
			mau[i] = j;
			if (Try(i + 1))
				return true;
			mau[i] = 0;
		}
	}
	return false;
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
		memset(a, 0, sizeof(a));
		memset(mau, 0, sizeof(mau));
		cin >> n >> m >> p;
		REP(i, m)
		{
			int x, y;
			cin >> x >> y;
			a[x][y] = a[y][x] = 1;
		}
		if (Try(1))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}