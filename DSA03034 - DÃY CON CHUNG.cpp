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

void testCase()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n), b(m), c(k);
	for (int &i : a)
		cin >> i;
	for (int &i : b)
		cin >> i;
	for (int &i : c)
		cin >> i;

	int i = 0, j = 0, h = 0, ok = 0;
	while (i < n && j < m && h < k)
	{
		if (a[i] == b[j] && a[i] == c[h])
		{
			cout << a[i] << " ";
			i++, j++, h++, ok = 1;
			continue;
		}
		if (a[i] < b[j])
			i++;
		else if (b[j] < c[h])
			j++;
		else
			h++;
	}
	if (!ok)
		cout << "NO";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 1;
	cin >> T;
	while (T--)
	{
		testCase();
		cout << "\n";
	}
	return 0;
}