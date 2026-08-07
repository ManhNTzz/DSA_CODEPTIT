#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (int)(1e9 + 7)

// Cre by ManhNTzz

char Find(ll n, int i, ll dp[], string s)
{
    if (i == 0)
        return s[n - 1];

    if (n == dp[i - 1] + 1)
        return Find(dp[i - 1], i - 1, dp, s);
    else if (n > dp[i - 1])
        return Find(n - 1 - dp[i - 1], i - 1, dp, s);
    return Find(n, i - 1, dp, s);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        ll n;
        cin >> n;

        long long int dp[100] = {};
        dp[0] = s.size();

        int i = 0;
        while (dp[i] < n)
        {
            dp[i + 1] = dp[i] * 2;
            i++;
        }

        cout << Find(n, i, dp, s) << endl;
    }

    return 0;
}
