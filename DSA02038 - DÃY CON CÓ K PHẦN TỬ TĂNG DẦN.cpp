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

int n, k;
vector<int> a, b;
void Try(int i, int pos)
{
	for (int j = pos; j < (int)a.size(); ++j)
	{
		b[i] = a[j];
		if (i == k)
		{
			FOR(c, 1, k)
			cout << b[c] << " ";
			cout << endl;
		}
		else
			Try(i + 1, j + 1);
	}
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
		cin >> n >> k;
		a.resize(n + 1);
		FOR(i, 1, n)
		cin >> a[i];
		sort(ALL(a));
		b.resize(k + 1);
		Try(1, 1);
	}
	return 0;
}
