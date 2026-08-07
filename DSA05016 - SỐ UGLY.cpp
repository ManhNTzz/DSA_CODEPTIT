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

int main()
{
    vector<int> dp(10005);
    dp[0] = 1;

    int a = 0, b = 0, c = 0;
    for (int i = 1; i < 10005; i++)
    {
        dp[i] = min({dp[a] * 2, dp[b] * 3, dp[c] * 5});
        if (dp[i] == dp[a] * 2)
            a++;
        if (dp[i] == dp[b] * 3)
            b++;
        if (dp[i] == dp[c] * 5)
            c++;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << dp[n - 1] << endl;
    }
    return 0;
}