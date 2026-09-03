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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--){
        int n, k;
        cin >> n >> k;
        vector<int> a(k + 1);
        FOR(i, 1, k)
        cin >> a[i];
        int i = k;
        while (i > 0 && a[i] == a[i - 1] + 1)
            i--;
        if (i != 0)
            a[i]--;
        for (int j = i + 1; j <= k; ++j){
            a[j] = n - k + j;
        }
        FOR(i, 1, k)
        cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
