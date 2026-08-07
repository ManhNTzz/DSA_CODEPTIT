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

// Cre by ManhNTzz

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, x;
		cin >> n >> m;
		set<int> se1, se2, se3;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			se1.insert(x);
			se2.insert(x);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> x;
			se1.insert(x);
			if (se2.count(x))
				se3.insert(x);
		}
		for (int x : se1)
			cout << x << " ";
		cout << endl;
		for (int x : se3)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
