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

// Cre by ManhnTzz

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<bool>> vs(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        queue<pair<pair<int, int>, int>> qe;
        qe.push({{0, 0}, 0});
        int ans = -1;
        while (!qe.empty())
        {
            pair<pair<int, int>, int> top = qe.front();
            qe.pop();
            auto [x, y] = top.first;
            int cnt = top.second;
            if (x == n - 1 && y == m - 1)
            {
                ans = cnt;
                break;
            }
            vs[x][y] = true;
            int x1 = x + a[x][y];
            if (x1 >= 0 && x1 < n && !vs[x1][y])
                qe.push({{x1, y}, cnt + 1});
            int y1 = y + a[x][y];
            if (y1 >= 0 && y1 < m && !vs[x][y1])
                qe.push({{x, y1}, cnt + 1});
        }
        cout << ans << endl;
    }
    return 0;
}
