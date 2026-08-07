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
const long long mod = 1000000007;

// Cre by ManhNTzz

bool f[1005][1005];
int n;
int qhd(string s)
{
    int n = s.size(), ans = -1e9, i, j;
    memset(f, false, sizeof(f));
    for (i = n - 1; i >= 0; i--)
    {
        for (j = i; j <= n - 1; j++)
        {
            if (i == j)
                f[i][j] = true;
            else if (s[i] == s[j])
            {
                if (j - i == 1)
                    f[i][j] = true;
                else
                    f[i][j] = f[i + 1][j - 1];
            }
            if (f[i][j])
                ans = max(ans, j - i + 1);
        }
    }
    return ans;
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
        n = qhd(s);
        cout << n << endl;
    }
    return 0;
}
