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
    string s;
    int x;
    stack<int> v;
    while (T--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> x;
            v.push(x);
        }
        else if (s == "POP")
        {
            if (!v.empty())
                v.pop();
        }
        else if (s == "PRINT")
        {
            if (v.empty())
                cout << "NONE" << endl;
            else
            {
                cout << v.top() << endl;
            }
        }
    }
    return 0;
}