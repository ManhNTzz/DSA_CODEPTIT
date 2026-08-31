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
const int INF = 1e9;

// Cre by ManhNTzz

vector<char> a;
set<string> res;
int n, k;
int cnt = 0;
void Try(int i){
	if (i > n){
		int dem = 0;
		int ok = 0;
		FOR(i, 1, n){
			if (a[i] == 'A'){
				dem++;
				if (dem > k) return;
				if (dem == k){
					ok = 1;
				}
			}
			else
				dem = 0;
		}
		if (ok){
			cnt++;
			string c = "";
			FOR(i, 1, n)
			c += a[i];
			res.insert(c);
		}
		return;
	}
	for (char c = 'A'; c <= 'B'; c++){
		a[i] = c;
		Try(i + 1);
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	a.resize(n + 1);
	Try(1);
	cout << cnt << endl;
	for (auto x : res)
		cout << x << endl;
	return 0;
}
