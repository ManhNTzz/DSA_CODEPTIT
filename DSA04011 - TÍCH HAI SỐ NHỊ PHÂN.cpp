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
const long long mod = 1000000007;

// Cre by ManhNTzz

ll Chuyen(string s)
{
	ll result = 0;
	for (char c : s)
	{
		ll x = c - '0';
		result = result * 2 + x;
	}
	return result;
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
		string a, b;
		cin >> a >> b;
		ll x = Chuyen(a);
		ll y = Chuyen(b);
		cout << x * y << endl;
	}
	return 0;
}
