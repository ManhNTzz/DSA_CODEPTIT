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

void testCase(){
	int n;
	cin >> n;
	queue<string> q;
	q.push("9");
	while (true){
		string s = q.front();
		q.pop();

		int x = 0;
		for (char i : s){
			x = x * 10 + (i - '0');
			x %= n;
		}
		if (x == 0){
			cout << s << endl;
			return;
		}
		q.push(s + '0');
		q.push(s + '9');
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T = 1;
	cin >> T;
	while (T--){
		testCase();
		cout << "\n";
	}
	return 0;
}
