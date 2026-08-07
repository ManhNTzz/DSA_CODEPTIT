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
#define maxn 15

// Cre by ManhNTzz

int V, E;
vector<int> dske[maxn];
bool vis[maxn] = {};
bool check = false;

void DFS(int u, int cnt)
{
	if (check)
		return;
	if (cnt == V)
	{
		check = true;
		return;
	}

	for (int v : dske[u])
	{
		if (!vis[v])
		{
			vis[v] = true;
			DFS(v, cnt + 1);
			vis[v] = false;
		}
	}
}

void check_Hamilton()
{
	for (int i = 1; i <= V; i++)
	{
		memset(vis, false, sizeof(vis));
		vis[i] = true;
		DFS(i, 1);
	}
	cout << check << endl;
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
		for (int i = 1; i < maxn; i++)
			dske[i].clear();
		check = false;

		cin >> V >> E;
		for (int i = 1; i <= E; i++)
		{
			int x, y;
			cin >> x >> y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}

		check_Hamilton();
	}

	return 0;
}