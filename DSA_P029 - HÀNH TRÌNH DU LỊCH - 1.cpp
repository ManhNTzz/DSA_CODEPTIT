#include <bits/stdc++.h>
using namespace std;

// Cre by ManhNTzz

int n;
int c[20][20];
bool visited[20];
int x[20];
int f, fopt, cmin;
void Try(int k)
{
	for (int v = 1; v <= n; v++)
	{
		if (!visited[v])
		{
			x[k] = v;
			visited[v] = true;
			if (k > 1)
				f += c[x[k - 1]][v];
			if (k == n)
			{
				fopt = min(fopt, f);
			}
			else if (f + (n - k + 1) * cmin < fopt)
			{
				Try(k + 1);
			}
			if (k > 1)
				f -= c[x[k - 1]][v];
			visited[v] = false;
		}
	}
}
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		cin >> n;
		cmin = INT_MAX;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> c[i][j];
				if (i != j)
					cmin = min(cmin, c[i][j]);
			}
		}
		memset(visited, false, sizeof(visited));
		f = 0;
		fopt = INT_MAX;
		Try(1);
		cout << fopt << endl;
	}
	return 0;
}