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

bool check(string s, int n)
{
    int x = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        x = (x * 10 + (s[i] - '0')) % n;
    }
    return x == 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        queue<string> q;
        q.push("1");
        while (true)
        {
            string s = q.front();
            q.pop();

            if (check(s, n))
            {
                cout << s;
                break;
            }

            q.push(s + "0");
            q.push(s + "1");
        }
        cout << endl;
    }
    return 0;
}
