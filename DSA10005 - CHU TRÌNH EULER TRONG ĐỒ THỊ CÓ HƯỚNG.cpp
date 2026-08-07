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
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
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
        int v, e;
        cin >> v >> e;
        int vao[105] = {0};
        int ra[105] = {0};
        REP(i, e)
        {
            int x, y;
            cin >> x >> y;
            vao[y]++;
            ra[x]++;
        }
        int check = 0;
        FOR(i, 1, v)
        {
            if (vao[i] != ra[i])
            {
                check = 1;
                break;
            }
        }
        if (check)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
