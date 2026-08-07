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
int parent[100005];
int sz[100005];
int canh[100005];
int n, m;
int Find(int v)
{
	if (v == parent[v])
		return v;
	return parent[v] = Find(parent[v]);
}
void Union(int u, int v)
{
	u = Find(u);
	v = Find(v);
	if (u != v)
	{
		parent[v] = u;
		sz[u] += sz[v];
		canh[u] += canh[v] + 1;
	}
	else
		canh[u]++;
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
		FOR(i, 1, n)
		{
			parent[i] = i;
			sz[i] = 1;
			canh[i] = 0;
		}
		int ok = 0;
		REP(i, m)
		{
			int x, y;
			cin >> x >> y;
			Union(x, y);
		}
		FOR(i, 1, n)
		{
			if (i == Find(i))
			{
				ll k = sz[i];
				ll socanh = (k * (k - 1)) / 2;
				if (canh[i] != socanh)
				{
					ok = 1;
					break;
				}
			}
		}
		if (ok)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}