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
int n, m, s, t;
int a[1005][1005] = {};
bool vs[1005];
int truoc[1005] = {0};
void DFS(int u)
{
	vs[u] = true;
	FOR(i, 1, n)
	{
		if (!vs[i] && a[u][i])
		{
			truoc[i] = u;
			DFS(i);
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
	while (T--)
	{
		memset(vs, false, sizeof(vs));
		memset(a, 0, sizeof(a));
		cin >> n >> m >> s >> t;
		REP(i, m)
		{
			int x, y;
			cin >> x >> y;
			a[x][y] = a[y][x] = 1;
		}
		DFS(s);
		if (!vs[t])
		{
			cout << -1 << endl;
			continue;
		}
		vector<int> res;
		int curr = t;
		while (1)
		{
			res.pb(curr);
			if (curr == s)
				break;
			curr = truoc[curr];
		}
		reverse(ALL(res));
		for (auto x : res)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}