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

int n, ans;
vector<int> a;
bool in;
void Try(int v, int c)
{
	if (c == 0)
	{
		ans++;
		if (in)
		{
			cout << "(";
			REP(i, a.size())
			{
				cout << a[i];
				if (i < a.size() - 1)
					cout << " ";
			}
			cout << ") ";
			return;
		}
	}
	for (int x = min(c, v); x >= 1; --x)
	{
		a.push_back(x);
		Try(x, c - x);
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
		a.clear();
		cin >> n;
		ans = 0;
		in = false;
		Try(n, n);
		cout << ans << endl;
		a.clear();
		in = true;
		Try(n, n);
		cout << endl;
	}
	return 0;
}
