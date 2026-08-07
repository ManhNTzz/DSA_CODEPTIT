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

// Cre by ManhNTzz

const int INF = 1e9;
int n;
string tree[100005];
ll tinh(int i)
{
	if (i > n)
		return 0;
	if (tree[i] == "+")
		return tinh(2 * i) + tinh(2 * i + 1);
	if (tree[i] == "-")
		return tinh(2 * i) - tinh(2 * i + 1);
	if (tree[i] == "*")
		return tinh(2 * i) * tinh(2 * i + 1);
	if (tree[i] == "/")
		return tinh(2 * i) / tinh(2 * i + 1);
	return stoll(tree[i]);
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
		FOR(i, 1, n)
		cin >> tree[i];
		cout << tinh(1) << endl;
	}
	return 0;
}