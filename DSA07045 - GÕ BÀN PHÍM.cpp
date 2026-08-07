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
#define vi vector<int>
#define vb vector<bool>
#define vll vector<long long>
#define pb push_back
const long long mod = 1000000007;
const int INF = 1e9;

// Cre by ManhNTzz

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    stack<char> sl, sr;

    for (char c : s)
    {
        if (c == '<')
        {
            if (!sl.empty())
            {
                sr.push(sl.top());
                sl.pop();
            }
        }
        else if (c == '>')
        {
            if (!sr.empty())
            {
                sl.push(sr.top());
                sr.pop();
            }
        }
        else if (c == '-')
        {
            if (!sl.empty())
                sl.pop();
        }
        else
            sl.push(c);
    }
    string ans = "";

    while (!sl.empty())
    {
        ans += sl.top();
        sl.pop();
    }

    reverse(ans.begin(), ans.end());

    while (!sr.empty())
    {
        ans += sr.top();
        sr.pop();
    }
    cout << ans << endl;

    return 0;
}
