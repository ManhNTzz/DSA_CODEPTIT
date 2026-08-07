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
#define endl '\n'
#define maxn 10000007

// Cre by ManhNTzz

vector<string> a, b, x;
set<string> v;
int n, k;
void Try(int i, int pos)
{
	for (int j = pos; j < (int)b.size(); ++j)
	{
		x[i] = b[j];
		if (i == k - 1)
		{
			REP(i, k)
			cout << x[i] << " ";
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
	cin >> n >> k;
	a.resize(n);
	REP(i, n)
	{
		cin >> a[i];
		v.insert(a[i]);
	}
	for (auto x : v)
	{
		b.push_back(x);
	}
	x.resize(k);
	Try(0, 0);
	return 0;
}
