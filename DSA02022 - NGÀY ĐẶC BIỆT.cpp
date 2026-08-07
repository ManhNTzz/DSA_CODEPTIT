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

int a[9];
void Try(int i)
{
	if (i > 8)
	{
		if (a[1] * 10 + a[2] == 0)
			return;
		if (a[3] * 10 + a[4] == 0 || a[3] * 10 + a[4] > 12)
			return;
		if (a[5] != 2)
			return;
		FOR(i, 1, 8)
		{
			cout << a[i];
			if (i == 2)
				cout << "/";
			if (i == 4)
				cout << "/";
		}
		cout << endl;
		return;
	}
	for (int c = 0; c <= 2; c += 2)
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
	Try(1);
	return 0;
}