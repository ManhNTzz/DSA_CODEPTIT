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
    string s;
    int x;
    vector<int> v;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> x;
            v.push_back(x);
        }
        else if (s == "pop")
        {
            if (!v.empty())
                v.pop_back();
        }
        else if (s == "show")
        {
            if (v.empty())
                cout << "empty";
            else
            {
                for (auto i : v)
                    cout << i << " ";
                cout << endl;
            }
        }
    }
    return 0;
}
