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
        string s;
        cin >> s;
        int res = 0;
        queue<string> q;
        q.push("1");
        while (!q.empty())
        {
            string z = q.front();
            q.pop();
            res++;
            string x = z + "0";
            if (x.length() > s.length() || (x.length() == s.length() && x > s))
                break;
            q.push(x);
            x = z + "1";
            if (x.length() > s.length() || (x.length() == s.length() && x > s))
                break;
            q.push(x);
        }
        cout << res + q.size() << endl;
    }
    return 0;
}