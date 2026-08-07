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
        vector<int> a(n);
        vector<vector<int>> b;
        REP(i, n)
        cin >> a[i];
        REP(i, n - 1)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (a[i] > a[j])
                    swap(a[i], a[j]);
            }
            b.push_back(a);
        }
        FOD(i, 0, (int)b.size() - 1)
        {
            cout << "Buoc " << i + 1 << ": ";
            REP(j, n)
            cout << b[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}
