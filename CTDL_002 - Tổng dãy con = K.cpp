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

vector<int> a, b;
int n, k;
int ans = 0;
void Try(int i)
{
	FOR(j, 0, 1)
	{
		b[i] = j;
		if (i == n)
		{
			int sum = 0;
			FOR(i, 1, n)
			sum += a[i] * b[i];
			if (sum == k)
			{
				ans++;
				FOR(i, 1, n)
				if (b[i])
					cout << a[i] << " ";
				cout << endl;
			}
		}
		else
			Try(i + 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	a.resize(n + 1);
	b.resize(n + 1);
	FOR(i, 1, n)
	cin >> a[i];
	Try(1);
	cout << ans;
	return 0;
}