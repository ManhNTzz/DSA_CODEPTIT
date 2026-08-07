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
vector<vector<int>> a, res;
vector<int> b;
vector<bool> used;
void solve()
{
	int sum = 0;
	FOR(i, 1, n)
	sum += a[i][b[i]];
	if (sum == k)
	{
		res.push_back(b);
	}
}
void Try(int i)
{
	FOR(j, 1, n)
	{
		if (used[j])
		{
			b[i] = j;
			used[j] = false;
			if (i == n)
				solve();
			else
				Try(i + 1);
			used[j] = true;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	a.resize(n + 1, vector<int>(n + 1));
	FOR(i, 1, n)
	FOR(j, 1, n)
	cin >> a[i][j];
	b.clear();
	b.resize(n + 1);
	used.clear();
	used.resize(n + 1, 1);
	res.clear();
	Try(1);
	cout << res.size() << endl;
	for (auto x : res)
	{
		FOR(i, 1, n)
		cout << x[i] << " ";
		cout << endl;
	}
	return 0;
}
