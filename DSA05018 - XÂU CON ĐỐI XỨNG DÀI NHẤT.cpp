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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n = s.size();
        s = "x" + s;
        bool f[n + 1][n + 1];
        memset(f, false, sizeof(f));
        FOR(i, 1, n)
        f[i][i] = 1;
        int ans = 1;
        for (int len = 2; len <= n; len++)
        {
            for (int i = 1; i <= n - len + 1; i++)
            {
                int j = i + len - 1;
                if (len == 2 && s[i] == s[j])
                    f[i][j] = true;
                else
                {
                    if (s[i] == s[j])
                        f[i][j] = f[i + 1][j - 1];
                }
                if (f[i][j])
                    ans = max(ans, len);
            }
        }
        cout << ans << endl;
    }
    return 0;
}