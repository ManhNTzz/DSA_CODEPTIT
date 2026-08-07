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
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        REP(i, n)
        {
            cin >> a[i].first >> a[i].second;
        }

        sort(a.begin(), a.end(), [](pair<int, int> a, pair<int, int> b) -> bool
             { return a.second < b.second; });

        vector<int> dp(n + 1, 1);
        REP(i, n)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j].second < a[i].first)
                    dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        cout << *max_element(dp.begin(), dp.end()) << endl;
    }

    return 0;
}
