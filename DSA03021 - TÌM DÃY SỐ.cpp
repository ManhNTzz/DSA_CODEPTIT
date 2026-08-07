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
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long ans = LLONG_MAX;
    for (long long k = 1; k <= 100000; k++)
    {
        long long sum = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            long long l = a[i] / (k + 1) + 1;
            long long r = a[i] / k;
            if (l > r)
            {
                ok = false;
                break;
            }
            sum += l;
        }
        if (ok)
            ans = min(ans, sum);
    }
    cout << ans;
    return 0;
}
