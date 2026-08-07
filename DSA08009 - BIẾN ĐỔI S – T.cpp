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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int s, t;
        cin >> s >> t;
        queue<pair<int, int>> qe;
        qe.push({s, 0});
        unordered_set<int> se;
        int ans = 0;
        while (!qe.empty())
        {
            auto &[top, cnt] = qe.front();
            qe.pop();
            if (top == t)
            {
                ans = cnt;
                break;
            }
            if (se.count(top))
                continue;
            se.insert(top);
            if (top > 1)
                qe.push({top - 1, cnt + 1});
            if (top < t)
                qe.push({top * 2, cnt + 1});
        }
        cout << ans << endl;
    }
    return 0;
}
