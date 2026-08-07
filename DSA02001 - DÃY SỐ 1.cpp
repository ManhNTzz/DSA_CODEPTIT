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
		while (n > 0)
		{
			cout << "[";
			FOR(i, 1, n)
			{
				cout << a[i];
				if (i != n)
					cout << " ";
			}
			cout << "]" << endl;
			vector<int> res;
			res.resize(n);
			FOR(i, 1, n - 1)
			res[i] = a[i] + a[i + 1];
			a = res;
			n--;
		}
	}
	return 0;
}