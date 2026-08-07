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
	vector<set<int>> dsk(n + 1);
	FOR(i, 1, n)
	FOR(j, 1, n)
	{
		int x;
		cin >> x;
		if (x)
		{
			dsk[i].insert(j);
			dsk[j].insert(i);
		}
	}
	FOR(i, 1, n)
	{
		for (auto x : dsk[i])
			cout << x << " ";
		cout << endl;
	}
	return 0;
}