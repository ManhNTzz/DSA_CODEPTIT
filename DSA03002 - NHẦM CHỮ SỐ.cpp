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

string a, b;
string sum(string a, string b)
{
	int l = max(a.len, b.len);
	while (a.len < l)
		a = ' ' + a;
	while (b.len < l)
		b = ' ' + b;
	string res = "";
	int nho = 0;
	FOD(i, 0, l - 1)
	{
		int digit = (a[i] - '0') + (b[i] - '0') + nho;
		nho = digit / 10;
		res = char(digit % 10 + '0') + res;
	}
	if (nho > 0)
		res = char(nho + '0') + res;
	return res;
}
string chuyen5(string a)
{
	REP(i, a.len)
	if (a[i] == '5')
		a[i] = '6';
	return a;
}
string chuyen6(string b)
{
	REP(i, b.len)
	if (b[i] == '6')
		b[i] = '5';
	return b;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b;
	cout << sum(chuyen6(a), chuyen6(b)) << " " << sum(chuyen5(a), chuyen5(b));
	return 0;
}