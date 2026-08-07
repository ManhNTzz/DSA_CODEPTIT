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
#define maxn 1005

// Cre by ManhNTzz

int V, E;
int colors[maxn];
vector<int> dske[maxn];

bool BFS(int st)
{
	queue<int> qe;
	qe.push(st);

	colors[st] = 0;
	while (!qe.empty())
	{
		int u = qe.front();
		qe.pop();

		for (int v : dske[u])
		{
			if (colors[v] == -1)
			{
				colors[v] = 1 - colors[u];
				qe.push(v);
			}
			else if (colors[v] == colors[u])
				return false;
		}
	}
	return true;
}

bool check()
{
	fill(colors, colors + maxn, -1);
	for (int i = 1; i <= V; i++)
	{
		if (colors[i] == -1)
		{
			if (!BFS(i))
				return false;
		}
	}
	return true;
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

		cin >> V >> E;

		for (int i = 1; i <= E; i++)
		{
			int x, y;
			cin >> x >> y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}

		if (check())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}