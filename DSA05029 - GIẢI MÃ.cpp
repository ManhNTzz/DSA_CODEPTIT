#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for (int i = (b); i >= (a); --i)
#define ll long long
#define se second
#define fi first
#define ALL(s) s.begin(), s.end()
#define ALLN(s) s.rbegin(), s.rend()
const long long mod = 1000000007;

// Cre by ManhNTzz

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
        int dp[1005] = {};
        dp[0] = dp[1] = 1;

        for (int i = 2; i <= s.size(); i++)
        {
            if (s[i - 1] > '0')
                dp[i] = dp[i - 1];
            if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6'))
                dp[i] += dp[i - 2];
        }

        cout << dp[s.size()] << endl;
    }
    return 0;
}