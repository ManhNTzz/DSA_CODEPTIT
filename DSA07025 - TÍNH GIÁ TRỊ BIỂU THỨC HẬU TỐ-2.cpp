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
		stack<ll> st;
		REP(i, n)
		{
			string s;
			cin >> s;
			if (s == "+" || s == "-" || s == "*" || s == "/")
			{
				ll a = st.top();
				st.pop();
				ll b = st.top();
				st.pop();
				ll c;
				if (s == "+")
					c = b + a;
				else if (s == "-")
					c = b - a;
				else if (s == "*")
					c = b * a;
				else
					c = b / a;
				st.push(c);
			}
			else
				st.push(stoll(s));
		}
		cout << st.top() << endl;
	}
	return 0;
}