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
		vector<int> a;
		a.resize(n + 1);
		FOR(i, 1, n)
		cin >> a[i];
		vector<string> kq;
		while (n > 0)
		{
			string s = "[";
			FOR(i, 1, n)
			{
				s += to_string(a[i]);
				if (i != n)
					s += " ";
			}
			s += "]";
			kq.pb(s);
			vector<int> res;
			res.resize(n);
			FOR(i, 1, n - 1)
			res[i] = a[i] + a[i + 1];
			a = res;
			n--;
		}
		FOD(i, 0, kq.size() - 1)
		cout << kq[i] << " ";
		cout << endl;
	}
	return 0;
}