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

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--)
	{
		int k;
		string a, b;
		cin >> k >> a >> b;
		while (a.len < b.len)
		{
			a = "0" + a;
		}
		while (b.len < a.len)
		{
			b = "0" + b;
		}
		string s = "";
		int nho = 0;
		FOD(i, 0, a.len - 1)
		{
			int digit = (a[i] - '0') + (b[i] - '0') + nho;
			s = char(digit % k + '0') + s;
			nho = digit / k;
		}
		if (nho > 0)
			s = char(nho + '0') + s;
		cout << s << endl;
	}
	return 0;
}
