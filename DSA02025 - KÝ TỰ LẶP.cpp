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

int n, ans;
string a[15], hv[15];
bool vs[15];
void Try(int i, int cou)
{
	if (i > n)
	{
		ans = min(ans, cou);
		return;
	}
	for (int j = 1; j <= n; ++j)
	{
		if (!vs[j])
		{
			vs[j] = true;
			hv[i] = a[j];
			int dd[127] = {};
			for (char c : hv[i])
				dd[c]++;
			for (char c : hv[i - 1])
				dd[c]++;
			int dem = 0;
			for (int i = 'A'; i <= 'Z'; ++i)
			{
				if (dd[i] == 2)
					dem++;
			}
			if (cou + dem < ans)
				Try(i + 1, cou + dem);

			vs[j] = false;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ans = INT_MAX;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	Try(1, 0);
	cout << ans << endl;
	return 0;
}
