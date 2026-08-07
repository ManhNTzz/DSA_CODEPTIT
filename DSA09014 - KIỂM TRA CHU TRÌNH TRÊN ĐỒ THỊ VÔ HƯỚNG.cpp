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
int parent[1005];
int n, m;
int Find(int v)
{
	if (v == parent[v])
		return v;
	return parent[v] = Find(parent[v]);
}
bool Union(int u, int v)
{
	u = Find(u);
	v = Find(v);
	if (u != v)
	{
		parent[v] = u;
		return true;
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
		cin >> n >> m;
		int ok = 0;
		FOR(i, 1, n)
		parent[i] = i;
		REP(i, m)
		{
			int x, y;
			cin >> x >> y;
			if (!Union(x, y))
			{
				ok = 1;
			}
		}
		if (ok)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}