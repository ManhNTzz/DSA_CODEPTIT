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

void convert(string s, map<int, int> &mp)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (isdigit(s[i]))
		{
			int j = i;
			int num = 0;
			while (j < s.size() && isdigit(s[j]))
			{
				num = num * 10 + s[j] - '0';
				j++;
			}
			while (j < s.size() && !isdigit(s[j]))
				j++;

			int mu = 0;
			while (j < s.size() && isdigit(s[j]))
			{
				mu = mu * 10 + s[j] - '0';
				j++;
			}
			i = j;

			mp[mu] += num;
		}
		else
			continue;
	}
}

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	while (T--)
	{
		string s, t;
		getline(cin, s);
		getline(cin, t);
		map<int, int> mp;
		convert(s, mp);
		convert(t, mp);
		vector<pair<int, int>> a(mp.begin(), mp.end());

		for (int i = a.size() - 1; i >= 0; i--)
		{
			cout << a[i].second << "*x^" << a[i].first;
			if (i != 0)
				cout << " + ";
		}
		cout << endl;
	}

	return 0;
}