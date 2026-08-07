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
        unordered_map<int, int> freq;
        set<int> v;
        REP(i, n)
        {
            cin >> a[i];
            v.insert(a[i]);
            freq[a[i]]++;
        }
        int ok = 1;
        for (auto x : v)
        {
            if (freq[x] > n / 2)
            {
                ok = 0;
                cout << x;
            }
        }
        if (ok == 1)
            cout << "NO";
        cout << endl;
    }
    return 0;
}
