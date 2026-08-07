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
const long long MOD = 1000000007;

// Cre by ManhNTzz

int n, a[105];
vector<int> cur;
vector<vector<int>> res;
bool cmp(vector<int> a, vector<int> b)
{
	string x = "", y = "";
	for (int i : a)
		x += to_string(i) + " ";
	x.pop_back();
	for (int i : b)
		y += to_string(i) + " ";
	y.pop_back();
	return x < y;
}
void Try(int pos)
{
	for (int i = pos; i < n; ++i)
	{
		if (cur.empty() || a[i] > cur.back())
		{
			cur.push_back(a[i]);
			if (cur.size() >= 2)
				res.push_back(cur);
			Try(i + 1);
			cur.pop_back();
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	REP(i, n)
	cin >> a[i];
	Try(0);
	sort(ALL(res), cmp);
	for (auto v : res)
	{
		for (auto x : v)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
