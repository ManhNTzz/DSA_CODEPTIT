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

int a[105], b[105];
int n, k;
int cnt = 0;
void Try(int i){
    for (int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if (i == k){
            cnt++;
            int ok = 0;
            FOR(i, 1, k)
            if (a[i] != b[i]){
                ok = 1;
                break;
            }
            if (!ok)
                cout << cnt << endl;
        }
        else
            Try(i + 1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--){
        cin >> n >> k;
        FOR(i, 1, k)
        cin >> b[i];
        Try(1);
        cnt = 0;
    }
    return 0;
}
