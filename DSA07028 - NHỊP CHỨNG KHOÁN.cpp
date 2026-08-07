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

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		int a[n + 1];
		FOR(i, 1, n)
		cin >> a[i];
		stack<int> st;
		FOR(i, 1, n)
		{
			while (!st.empty() && a[i] >= a[st.top()])
				st.pop();
			if (st.empty())
				cout << i << " ";
			else
				cout << i - st.top() << " ";
			st.push(i);
		}
		cout << endl;
	}
	return 0;
}
