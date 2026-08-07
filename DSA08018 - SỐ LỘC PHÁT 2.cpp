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
        int n;
        cin >> n;
        queue<string> qe;
        vector<string> v;
        qe.push("");
        while (!qe.empty())
        {
            string s = qe.front();
            qe.pop();
            if (s.len > 0)
                v.push_back(s);
            if (s.len == n)
                continue;
            qe.push(s + "6");
            qe.push(s + "8");
        }
        cout << v.size() << endl;
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
