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
        vector<int> a(n);
        vector<vector<int>> b;
        REP(i, n)
        cin >> a[i];
        REP(i, n - 1)
        {
            int check = 0;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    check = 1;
                }
            }
            if (check == 0)
                break;
            b.push_back(a);
        }
        FOD(i, 0, b.size() - 1)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (auto v : b[i])
                cout << v << " ";
            cout << endl;
        }
    }
    return 0;
}
