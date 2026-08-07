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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int q;
        cin >> q;
        queue<int> qe;
        REP(i, q)
        {
            int n;
            cin >> n;
            if (n == 1)
                cout << qe.size() << endl;
            else if (n == 2)
            {
                if (qe.empty())
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if (n == 3)
            {
                int v;
                cin >> v;
                qe.push(v);
            }
            else if (n == 4)
            {
                if (!qe.empty())
                    qe.pop();
            }
            else if (n == 5)
            {
                if (qe.empty())
                    cout << -1 << endl;
                else
                    cout << qe.front() << endl;
            }
            else if (n == 6)
            {
                if (qe.empty())
                    cout << -1 << endl;
                else
                    cout << qe.back() << endl;
            }
        }
    }
    return 0;
}