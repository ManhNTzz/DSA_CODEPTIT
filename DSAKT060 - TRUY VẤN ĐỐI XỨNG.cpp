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

// Cre by ManhNTzz

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        if (c == 'q')
        {
            int l, r;
            cin >> l >> r;
            string t = s;
            reverse(t.begin() + l - 1, t.begin() + r);
            cout << (s == t ? "YES" : "NO") << endl;
        }
        else
        {
            int i;
            cin >> i;
            char a;
            cin >> a;
            s[i - 1] = a;
        }
    }
    return 0;
}
