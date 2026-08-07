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

int a[100][100], n;
vector<string> v;
void Try(int i, int j, string s)
{
	if (i == n && j == n)
	{
		v.push_back(s);
		return;
	}
	a[i][j] = 0;
	if (i < n && a[i + 1][j] == 1)
		Try(i + 1, j, s + 'D');
	if (j > 0 && a[i][j - 1] == 1)
		Try(i, j - 1, s + 'L');
	if (i > 0 && a[i - 1][j] == 1)
		Try(i - 1, j, s + 'U');
	if (j < n && a[i][j + 1] == 1)
		Try(i, j + 1, s + 'R');
	a[i][j] = 1;
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
		cin >> n;
		v.clear();
		FOR(i, 1, n)
		FOR(j, 1, n)
		cin >> a[i][j];
		if (a[1][1] == 0 || a[n][n] == 0)
		{
			cout << -1 << endl;
			continue;
		}
		Try(1, 1, "");
		if (v.empty())
		{
			cout << -1 << endl;
			continue;
		}
		sort(ALL(v));
		for (auto x : v)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}