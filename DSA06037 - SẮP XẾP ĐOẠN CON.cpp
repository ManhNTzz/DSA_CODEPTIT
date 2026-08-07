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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        vector<int> b(n, INT_MIN);
        int min = INT_MAX;
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] < min)
                min = a[i];
            b[i - 1] = min;
        }

        vector<int> res;
        int cur = a[0];

        for (int i = 0; i < n; i++)
        {
            cur = max(cur, a[i]);
            if (cur <= b[i])
                res.push_back(i + 1);
        }
        cout << res.size() << endl;
        for (int x : res)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
