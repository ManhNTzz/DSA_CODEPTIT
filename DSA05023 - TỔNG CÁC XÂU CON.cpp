#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for (int i = (b); i >= (a); --i)
#define ll long long
#define se second
#define fi first
#define ALL(s) s.begin(), s.end()
#define ALLN(s) s.rbegin(), s.rend()
const long long mod = 1000000007;

// Cre by ManhNTzz

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            string t = "";
            for (int j = i; j < s.size(); j++)
            {
                t += s[j];
                sum += stoll(t);
            }
        }
        cout << sum << endl;
    }
    return 0;
}