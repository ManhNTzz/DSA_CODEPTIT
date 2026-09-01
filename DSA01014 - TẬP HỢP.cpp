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

int a[101], n, k, s, ans;
void solve(){
	int sum = 0;
	FOR(i, 1, k)
	sum += a[i];
	if (sum == s)
		ans++;
}
void Try(int i){
	for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
		a[i] = j;
		if (i == k)
			solve();
		else
			Try(i + 1);
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T = 100;
	while (T--){
		cin >> n >> k >> s;
		if (n == 0 && k == 0 && s == 0)
			break;
		ans = 0;
		Try(1);
		cout << ans << endl;
	}
	return 0;
}
