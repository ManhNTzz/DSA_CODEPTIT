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

int n;
vector<int> a, b;
vector<vector<int>> res;
void Try(int start, int sum)
{
	if (sum % 2 != 0)
	{
		res.push_back(b);
	}
	for (int i = start; i < a.size(); ++i)
	{
		b.push_back(a[i]);
		Try(i + 1, sum + a[i]);
		b.pop_back();
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
		a.clear();
		b.clear();
		res.clear();
		cin >> n;
		a.resize(n);
		REP(i, n)
		cin >> a[i];
		sort(ALL(a), greater<int>());
		Try(0, 0);
		sort(ALL(res));
		for (auto v : res)
		{
			for (auto x : v)
				cout << x << " ";
			cout << endl;
		}
	}
	return 0;
}
