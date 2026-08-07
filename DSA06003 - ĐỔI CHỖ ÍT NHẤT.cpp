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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int ans = 0;
        REP(i, n)
        {
            int k = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[k])
                {
                    k = j;
                }
            }

            if (k != i)
                ans++;
            swap(a[i], a[k]);
        }

        cout << ans << endl;
    }
    return 0;
}