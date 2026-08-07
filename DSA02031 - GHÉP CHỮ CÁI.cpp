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

char d;
vector<char> a, b;
bool unused[100];
void Try(int i)
{
	for (int j = 0; j < (int)a.size(); ++j)
	{
		if (unused[j])
		{
			b[i] = a[j];
			unused[j] = false;
			if (i == (int)a.size() - 1)
			{
				int ok = 1;
				for (int c = 0; c < (int)a.size() - 2; ++c)
				{
					if ((b[c] != 'A' && b[c] != 'E') && (b[c + 1] == 'A' || b[c + 1] == 'E') && (b[c + 2] != 'A' && b[c + 2] != 'E'))
					{
						ok = 0;
						break;
					}
				}
				if (ok == 1)
				{
					for (int c = 0; c < (int)a.size(); ++c)
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
	cin >> d;
	for (char x = 'A'; x <= d; ++x)
	{
		a.push_back(x);
	}
	b.resize(a.size());
	for (int i = 0; i < (int)a.size(); ++i)
		unused[i] = true;
	Try(0);
	return 0;
}
