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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        ll a[n1], b[n2], c[n3];
        REP(i, n1)
        cin >> a[i];
        REP(i, n2)
        cin >> b[i];
        REP(i, n3)
        cin >> c[i];
        int i = 0, j = 0, k = 0;
        bool ok = 1;
        while (i < n1 && j < n2 && k < n3)
        {
            if (a[i] == b[j] && b[j] == c[k])
            {
                cout << a[i] << " ";
                ok = 0;
                i++;
                j++;
                k++;
            }
            else if (a[i] < b[j])
                i++;
            else if (b[j] < c[k])
                j++;
            else
                k++;
        }
        if (ok == 1)
            cout << -1;
        cout << endl;
    }
    return 0;
}