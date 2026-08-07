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
const long long MOD = 1000000007;

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
        vector<int> a(n);
        REP(i, n)
        cin >> a[i];
        int sum = a[0] + a[1];
        REP(i, n)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (abs(a[i] + a[j]) < abs(sum))
                {
                    sum = a[i] + a[j];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
