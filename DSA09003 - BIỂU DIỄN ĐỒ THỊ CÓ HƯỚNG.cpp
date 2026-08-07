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

// Cre by ManhNtzz

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int v, e;
        cin >> v >> e;
        vector<set<int>> dsk(v + 1);
        FOR(i, 1, e)
        {
            int x, y;
            cin >> x >> y;
            dsk[x].insert(y);
        }
        FOR(i, 1, v)
        {
            cout << i << ": ";
            for (auto x : dsk[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}