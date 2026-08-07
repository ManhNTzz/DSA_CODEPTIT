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

int n;
vector<int> a, b;
bool unused[100];
void Try(int i)
{
	REP(j, n)
	{
		if (unused[j])
		{
			b[i] = a[j];
			unused[j] = false;
			if (i == n - 1)
			{
				int ok = 1;
				REP(c, n - 1)
				{
					if (abs(b[c] - b[c + 1]) == 1)
					{
						ok = 0;
						break;
					}
				}
				if (ok == 1)
				{
					REP(c, n)
					cout << b[c];
					cout << endl;
				}
			}
			else
				Try(i + 1);
			unused[j] = true;
		}
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
		cin >> n;
		a.clear();
		FOR(i, 1, n)
		a.push_back(i);
		b.resize(n);
		REP(i, n)
		unused[i] = true;
		Try(0);
	}
	return 0;
}
