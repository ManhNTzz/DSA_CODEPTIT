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
	int T;
	cin >> T;
	while (T--){
		string s;
		cin >> s;
		int j = s.len;
		FOD(i, 0, j - 1){
			if (s[i] == '0'){
				s[i] = '1';
			}
			else{
				s[i] = '0';
				break;
			}
		}
		cout << s << endl;
	}
	return 0;
}
