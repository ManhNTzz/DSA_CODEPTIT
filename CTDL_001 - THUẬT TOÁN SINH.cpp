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

int n;
int a[105];
void Try(int i){
	FOR(j, 0, 1){
		a[i] = j;
		if (i == n){
			int ok = 0;
			for (int i = 1; i <= n / 2; i++){
				if (a[i] != a[n - i + 1]){
					ok = 1;
					break;
				}
			}
			if (!ok){
				FOR(i, 1, n)
				cout << a[i] << " ";
				cout << endl;
			}
		}
		else
			Try(i + 1);
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	Try(1);
	return 0;
}
