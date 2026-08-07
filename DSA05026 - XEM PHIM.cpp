#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for (int i = (b); i >= (a); --i)
#define ll long long
#define se second
#define fi first
#define ALL(s) s.begin(), s.end()
#define ALLN(s) s.rbegin(), s.rend()
const long long mod = 1000000007;

// Cre by ManhNTzz

int main()
{
	int C, N;
	cin >> C >> N;
	vector<int> a(N);
	for (int &x : a)
		cin >> x;

	vector<int> dp(C + 1, 0);
	dp[0] = 1;

	for (int x : a)
	{
		for (int i = C; i >= x; i--)
		{
			if (dp[i - x])
				dp[i] = 1;
		}
	}
	for (int i = C; i >= 0; i--)
	{
		if (dp[i])
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}
