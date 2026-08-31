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

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	unordered_map<int, int> v;
	vector<int> b;
	REP(i, n){
		cin >> a[i];
		if (v[a[i]] == 0){
			b.push_back(a[i]);
		}
		v[a[i]]++;
	}
	for (auto x : b)
		cout << x << " ";
	return 0;
}
