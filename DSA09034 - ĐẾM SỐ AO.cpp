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

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	char a[105][105];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == 'W')
			{
				cnt++;
				queue<pair<int, int>> qe;
				qe.push({i, j});

				while (!qe.empty())
				{
					auto [x, y] = qe.front();
					qe.pop();

					for (int i = 0; i < 8; i++)
					{
						int x1 = x + dx[i];
						int y1 = y + dy[i];
						if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && a[x1][y1] == 'W')
						{
							qe.push({x1, y1});
							a[x1][y1] = '.';
						}
					}
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}