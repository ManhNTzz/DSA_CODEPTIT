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

int l[1005][1005];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		memset(l, 0, sizeof(l));
		int n = s1.len;
		int m = s2.len;
		FOR(i, 1, n)
		FOR(j, 1, m)
		{
			if (s1[i - 1] == s2[j - 1])
				l[i][j] = l[i - 1][j - 1] + 1;
			else
				l[i][j] = max(l[i - 1][j], l[i][j - 1]);
		}
		cout << l[n][m] << endl;
	}
	return 0;
}