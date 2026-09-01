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
const long long MOD = 1000000007;

// Cre by ManhNTzz

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    FOR(c, 1, T){
        int x;
        string s;
        cin >> x >> s;
        cout << x << " ";
        int i = s.len - 2;
        while (i >= 0 && s[i] >= s[i + 1]) i--;
        if (i < 0){
            cout << "BIGGEST" << endl;
            continue;
        }
        int j;
        for (j = s.len - 1; j > i; --j)
            if (s[j] > s[i]) {
                swap(s[j], s[i]);
                break;
            }
        sort(s.begin() + i + 1, s.end());
        cout << s << endl;
    }
    return 0;
}
