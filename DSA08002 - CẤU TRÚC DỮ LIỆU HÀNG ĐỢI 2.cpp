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
    int q;
    cin >> q;
    queue<int> qe;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int x;
            cin >> x;
            qe.push(x);
        }
        else if (s == "POP")
        {
            if (!qe.empty())
                qe.pop();
        }
        else if (s == "PRINTFRONT")
        {
            if (qe.empty())
                cout << "NONE" << endl;
            else
                cout << qe.front() << endl;
        }
    }
    return 0;
}
