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
const long long mod = 1000000007;

// Cre by ManhNTzz

int snt(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return 0;
	return 1;
}
int n, p, s;
vector<int> prime, a;
vector<vector<int>> res;
void Try(int pos, int start, int sum)
{
	if (pos == n)
	{
		if (sum == s)
			res.push_back(a);
		return;
	}
	for (int i = start; i < prime.size(); ++i)
	{
		if (sum + prime[i] > s)
			break;
		a.push_back(prime[i]);
		Try(pos + 1, i + 1, sum + prime[i]);
		a.pop_back();
	}
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
		cin >> n >> p >> s;
		a.clear();
		prime.clear();
		res.clear();
		for (int i = p + 1; i <= s; ++i)
			if (snt(i))
				prime.push_back(i);
		Try(0, 0, 0);
		cout << res.size() << endl;
		for (auto v : res)
		{
			for (auto x : v)
				cout << x << " ";
			cout << endl;
		}
	}
	return 0;
}