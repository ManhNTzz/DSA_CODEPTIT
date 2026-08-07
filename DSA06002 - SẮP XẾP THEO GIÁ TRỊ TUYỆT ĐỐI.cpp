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

// Cre by ManhNTzz

int X;

bool cmp(int a, int b)
{
	return abs(X - a) < abs(X - b);
}

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n >> X;
		vector<int> a(n);
		for (int &x : a)
			cin >> x;
		stable_sort(a.begin(), a.end(), cmp);
		for (int x : a)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
