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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;
		string s;
		cin >> s;
		int cnt = 0;
		while (k > 0)
		{
			priority_queue<pair<char, int>> qp;
			for (int i = cnt; i < s.length(); i++)
				qp.push({s[i], i});
			if (!qp.empty() && s[cnt] != qp.top().first)
			{
				int j = qp.top().second;
				swap(s[cnt], s[j]);
				k--;
			}
			cnt++;
			if (cnt == s.length())
				break;
		}
		cout << s << endl;
	}
	return 0;
}