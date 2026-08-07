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
    deque<int> de;
    while (T--)
    {
        string s;
        cin >> s;
        if (s == "PUSHFRONT")
        {
            int x;
            cin >> x;
            de.push_front(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (de.empty())
                cout << "NONE" << endl;
            else
                cout << de.front() << endl;
        }
        else if (s == "POPFRONT")
        {
            if (!de.empty())
                de.pop_front();
        }
        else if (s == "PUSHBACK")
        {
            int x;
            cin >> x;
            de.push_back(x);
        }
        else if (s == "PRINTBACK")
        {
            if (de.empty())
                cout << "NONE" << endl;
            else
                cout << de.back() << endl;
        }
        else if (s == "POPBACK")
        {
            if (!de.empty())
                de.pop_back();
        }
    }
    return 0;
}
