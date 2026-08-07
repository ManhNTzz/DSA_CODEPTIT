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

int n, x;
vector<int> a, cur;
bool check;
void Try(int pos, int sum)
{
	if (sum == x)
	{
		check = true;
		cout << "[";
		REP(i, cur.size())
		{
			cout << cur[i];
			if (i < cur.size() - 1)
				cout << " ";
		}
		cout << "]";
		return;
	}
	for (int i = pos; i < n; ++i)
	{
		if (sum + a[i] > x)
			break;
		cur.push_back(a[i]);
		Try(i, sum + a[i]);
		cur.pop_back();
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
		cin >> n >> x;
		a.clear();
		cur.clear();
		a.resize(n);
		check = false;
		REP(i, n)
		cin >> a[i];
		sort(ALL(a));
		Try(0, 0);
		if (!check)
			cout << -1;
		cout << endl;
	}
	return 0;
}