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

// Cre by ManhNTzz

void Try(int i, vector<int> &a, int Sum, int cnt, int &ans)
{
	if (Sum <= 0)
	{
		if (Sum == 0)
			ans = min(ans, cnt);
		return;
	}

	for (int j = i + 1; j < a.size(); j++)
	{
		Try(j, a, Sum - a[j], cnt + 1, ans);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, S;
	cin >> n >> S;
	vector<int> a(n);
	for (int &x : a)
		cin >> x;
	sort(a.begin(), a.end(), greater<>());
	int ans = INT_MAX;
	Try(-1, a, S, 0, ans);
	if (ans == INT_MAX)
		cout << -1 << endl;
	else
		cout << ans << endl;
	return 0;
}