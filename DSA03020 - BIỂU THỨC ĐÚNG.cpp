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
        int n = s.len;
        int p = 0, canbang = 0, ans = 0;
        vector<int> pos;
        REP(i, n)
        if (s[i] == '[')
            pos.push_back(i);
        REP(i, n)
        {
            if (s[i] == '[')
            {
                p++;
                canbang++;
            }
            else
                canbang--;
            if (canbang < 0)
            {
                ans += pos[p] - i;
                swap(s[i], s[pos[p]]);
                canbang = 1;
                p++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
