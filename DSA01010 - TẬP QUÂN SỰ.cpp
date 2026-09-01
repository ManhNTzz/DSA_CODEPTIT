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
#define endl '\n'
#define maxn 10000007

// Cre by ManhNTzz

int n, k, a[100];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--){
		cin >> n >> k;
		unordered_map<int, int> v;
		int ans = 0;
		FOR(i, 1, k){
			cin >> a[i];
			v[a[i]]++;
		}
		int t = k;
		while (t > 0 && a[t] == n - k + t) t--;
		if (t == 0){
			cout << k << endl;
			continue;
		}
		a[t]++;
		for (int i = t + 1; i <= k; ++i)
			a[i] = a[t] + i - t;
		FOR(i, 1, k){
			if (v[a[i]] == 0)
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
