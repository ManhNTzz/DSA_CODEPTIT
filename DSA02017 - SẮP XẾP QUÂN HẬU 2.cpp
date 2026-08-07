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

int a[8][8];
int cot[8], cheo1[15], cheo2[15];
int res, pos;
void Try(int i)
{
	if (i == 8)
	{
		res = max(res, pos);
		return;
	}
	for (int j = 0; j < 8; j++)
	{
		if (!cot[j] && !cheo1[i - j + 7] && !cheo2[i + j])
		{
			cot[j] = cheo1[i - j + 7] = cheo2[i + j] = 1;
			pos += a[i][j];
			Try(i + 1);
			pos -= a[i][j];
			cot[j] = cheo1[i - j + 7] = cheo2[i + j] = 0;
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
		REP(i, 8)
		REP(j, 8)
		cin >> a[i][j];
		res = 0, pos = 0;
		Try(0);
		cout << res << endl;
	}
	return 0;
}
