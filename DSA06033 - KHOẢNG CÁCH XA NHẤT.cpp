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
        int n;
        cin >> n;
        vector<ll> a(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (mp[a[i]] > 0)
                mp[a[i]] = min(mp[a[i]], i);
            else
                mp[a[i]] = i + 1;
        }
        sort(a.begin(), a.end());
        int ans = -1e9;
        int curInd = mp[a[0]];
        for (int i = 1; i < n; i++)
        {
            if (mp[a[i]] - curInd > ans)
            {
                ans = mp[a[i]] - curInd;
            }
            curInd = min(curInd, mp[a[i]]);
        }
        cout << (ans == -1e9 ? -1 : ans) << endl;
    }
    return 0;
}
