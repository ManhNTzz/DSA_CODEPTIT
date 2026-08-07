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

int n, k;
int a[15];
vector<int> cur;
vector<vector<int>> res;
void Try(int pos, int sum)
{
	if (sum == k)
	{
		res.push_back(cur);
		return;
	}
	for (int i = pos; i < n; ++i)
	{
		if (sum + a[i] > k)
			break;
		if (i > pos && a[i] == a[i - 1])
			continue;
		cur.push_back(a[i]);
		Try(i + 1, sum + a[i]);
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
		cin >> n >> k;
		REP(i, n)
		cin >> a[i];
		sort(a, a + n);
		cur.clear();
		res.clear();
		Try(0, 0);
		if (res.empty())
		{
			cout << -1 << endl;
			continue;
		}
		else
		{
			for (auto x : res)
			{
				cout << "[";
				REP(i, (int)x.size())
				{
					cout << x[i];
					if (i != (int)x.size() - 1)
						cout << " ";
				}
				cout << "] ";
			}
			cout << endl;
		}
	}
	return 0;
}