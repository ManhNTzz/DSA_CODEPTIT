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
const int INF = 1e9;

// Cre by ManhNTzz

int n;
int a[105], b[105], c[105];
int d[105][105];
int res, pos;
void Try(int i)
{
	if (i > 8)
	{
		res = max(res, pos);
		return;
	}
	FOR(j, 1, 8)
	{
		if (!a[j] && !b[i + j - 1] && !c[i - j + 8])
		{
			a[j] = b[i + j - 1] = c[i - j + 8] = 1;
			pos += d[i][j];
			Try(i + 1);
			a[j] = b[i + j - 1] = c[i - j + 8] = 0;
			pos -= d[i][j];
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	FOR(c, 1, T)
	{
		FOR(i, 1, 8)
		FOR(j, 1, 8)
		cin >> d[i][j];
		res = 0, pos = 0;
		Try(1);
		cout << "Test " << c << ": " << res << endl;
	}

	return 0;
}