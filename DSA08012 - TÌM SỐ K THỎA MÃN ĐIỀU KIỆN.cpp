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
    vector<int> res(1, 0);
    queue<int> qe;
    for (int i = 1; i <= 5; i++)
        qe.push(i);

    while (!qe.empty())
    {
        int x = qe.front();
        qe.pop();
        res.push_back(x);

        if (x > 1e5)
            continue;
        vector<bool> vis(6, false);
        string t = to_string(x);
        for (char c : t)
            vis[c - '0'] = true;

        for (int i = 0; i <= 5; i++)
        {
            if (!vis[i])
                qe.push(x * 10 + i);
        }
    }

    int T;
    cin >> T;
    while (T--)
    {
        int l, r;
        cin >> l >> r;
        auto it1 = lower_bound(res.begin(), res.end(), l);
        auto it2 = lower_bound(res.begin(), res.end(), r + 1);
        cout << it2 - it1 << endl;
    }
    return 0;
}