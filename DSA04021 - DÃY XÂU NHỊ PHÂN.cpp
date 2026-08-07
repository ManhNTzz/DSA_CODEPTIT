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

ll F[100];
char FiboWord(int n, ll k)
{
	if (n == 1)
		return '0';
	if (n == 2)
		return '1';
	if (k <= F[n - 2])
		return FiboWord(n - 2, k);
	return FiboWord(n - 1, k - F[n - 2]);
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
		int n;
		long long k;
		cin >> n >> k;
		F[0] = 0, F[1] = 1;
		for (int i = 2; i <= 92; ++i)
			F[i] = F[i - 1] + F[i - 2];
		cout << FiboWord(n, k) << endl;
	}
	return 0;
}
