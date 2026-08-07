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

int a[105];
int n;
void Try(int i)
{
	if (i > n)
	{
		if (a[1] == 6 || a[n] == 8)
			return;
		FOR(i, 1, n - 1)
		if (a[i] == 8 && a[i + 1] == 8)
			return;
		FOR(i, 1, n - 3)
		if (a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6 && a[i + 3] == 6)
			return;
		FOR(i, 1, n)
		cout << a[i];
		cout << endl;
		return;
	}
	for (int c = 6; c <= 8; c += 2)
	{
		a[i] = c;
		Try(i + 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	Try(1);
	return 0;
}