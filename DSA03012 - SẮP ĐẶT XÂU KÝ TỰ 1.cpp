#include <bits/stdc++.h>
using namespace std;

// Cre by ManhNTzz

void process()
{
	string s;
	cin >> s;
	int n = s.length();
	vector<int> a(26, 0);
	for (int i = 0; i < s.length(); ++i)
	{
		a[s[i] - 'a']++;
	}
	int ok = 1;
	for (int i = 0; i < 26; ++i)
	{
		if (a[i] > ((n + 1) / 2))
		{
			ok = -1;
			break;
		}
	}
	cout << ok << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		process();
	}
	return 0;
}
