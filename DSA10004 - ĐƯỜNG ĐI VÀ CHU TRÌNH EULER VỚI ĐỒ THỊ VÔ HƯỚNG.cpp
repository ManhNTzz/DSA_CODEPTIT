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
        int n, m;
        cin >> n >> m;
        int bac[105] = {0};
        REP(i, m)
        {
            int x, y;
            cin >> x >> y;
            bac[x]++;
            bac[y]++;
        }
        int dem = 0;
        FOR(i, 1, n)
        {
            if (bac[i] % 2 == 1)
                dem++;
        }
        if (dem == 0)
            cout << 2 << endl;
        else if (dem == 2)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
