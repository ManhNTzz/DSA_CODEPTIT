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
const int INF = 1e9;

// Cre by ManhNTzz

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<string> s;
		s.pb("0");
		s.pb("1");
		FOR(c, 2, n)
		{
			int l = s.size();
			FOD(i, 0, l - 1)
			s.pb(s[i]);
			FOR(i, 0, l - 1)
			s[i] = "0" + s[i];
			FOR(i, l, s.size() - 1)
			s[i] = "1" + s[i];
		}
		for (auto x : s)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}