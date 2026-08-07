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
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        unordered_map<int, int> mp;
        for (int x : a)
            mp[x]++;
        ll cnt = 0;
        for (int x : a)
        {
            int y = k - x;
            if (2 * x == k)
                cnt += (ll)mp[x] * (mp[x] - 1) / 2;
            else
                cnt += (ll)mp[x] * mp[y];
            mp[x] = 0;
        }
        cout << cnt << endl;
    }
    return 0;
}
