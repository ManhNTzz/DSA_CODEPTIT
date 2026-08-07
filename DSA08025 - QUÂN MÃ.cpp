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

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t;
        cin >> s >> t;
        int x1 = s[0] - 'a', y1 = 8 - (s[1] - '0');
        int x2 = t[0] - 'a', y2 = 8 - (t[1] - '0');
        int ans = 0;
        queue<pair<pair<int, int>, int>> qe;
        qe.push({{x1, y1}, 0});
        set<pair<int, int>> se;
        while (!qe.empty())
        {
            auto tmp = qe.front();
            qe.pop();
            pair<int, int> tdo = tmp.first;
            int cnt = tmp.second;
            int x = tdo.first;
            int y = tdo.second;
            if (x == x2 && y == y2)
            {
                ans = cnt;
                break;
            }
            if (se.count(tdo))
                continue;
            se.insert(tdo);
            for (int i = 0; i < 8; i++)
            {
                int u = x + dx[i];
                int v = y + dy[i];
                if (u >= 0 && u < 8 && v >= 0 && v < 8)
                {
                    qe.push({{u, v}, cnt + 1});
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
