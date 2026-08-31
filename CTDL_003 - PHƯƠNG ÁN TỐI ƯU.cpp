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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, W;
	if (!(cin >> N >> W))
		return 0;
	vector<long long> c(N + 1);
	vector<long long> a(N + 1);
	for (int i = 1; i <= N; i++)
		cin >> c[i];
	for (int i = 1; i <= N; i++)
		cin >> a[i];
	vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));
	for (int i = 1; i <= N; i++){
		for (int w = 0; w <= W; w++){
			dp[i][w] = dp[i - 1][w];
			if (a[i] <= w){
				dp[i][w] = max(dp[i][w], dp[i - 1][w - a[i]] + c[i]);
			}
		}
	}
	cout << dp[N][W] << endl;
	vector<int> x(N + 1, 0);
	int current_w = W;
	for (int i = N; i >= 1; i--){
		if (dp[i][current_w] != dp[i - 1][current_w]){
			x[i] = 1;
			current_w -= a[i];
		}
	}
	for (int i = 1; i <= N; i++){
		cout << x[i] << (i == N ? "" : " ");
	}
	cout << endl;

	return 0;
}
