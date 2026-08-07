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
#define endl '\n'
#define maxn 10000007

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
        int a[n];
        int sum = 0;
        int sum1 = 0;
        REP(i, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        int ok = 1;
        REP(i, n)
        {
            int sum2 = sum - sum1 - a[i];
            if (sum2 == sum1)
            {
                cout << i + 1;
                ok = 0;
                break;
            }
            else
                sum1 += a[i];
        }
        if (ok)
            cout << -1;
        cout << endl;
    }
    return 0;
}
