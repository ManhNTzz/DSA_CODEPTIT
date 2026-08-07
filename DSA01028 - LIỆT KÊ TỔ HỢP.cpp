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

int a[105], b[105];
set<int> res;
int n, k;
void Try(int i)
{
	for (int j = b[i - 1] + 1; j <= n - k + i; j++)
	{
		b[i] = j;
		if (i == k)
		{
			FOR(i, 1, k)
			cout << a[b[i]] << " ";
			cout << endl;
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
	REP(i, n)
	{
		int x;
		cin >> x;
		res.insert(x);
	}
	int cnt = 1;
	for (auto x : res)
	{
		a[cnt++] = x;
	}
	n = cnt - 1;
	Try(1);
	return 0;
}