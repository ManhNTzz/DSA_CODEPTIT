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
const long long mod = 1000000007;

// Cre by ManhNTzz

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[105][105] = {0};
	FOR(i, 1, n)
	{
		cin.ignore();
		string s;
		getline(cin, s);
		stringstream ss(s);
		string x;
		while (ss >> x)
		{
			int y = stoi(x);
			a[i][y] = 1;
			a[y][i] = 1;
		}
	}
	FOR(i, 1, n)
	{
		FOR(j, i + 1, n)
		{
			if (a[i][j] == 1)
			{
				cout << i << " " << j << endl;
			}
		}
	}
	return 0;
}
