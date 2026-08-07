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
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string s;
        getline(cin, s);
        stack<char> st;
        int check = 0;
        for (auto c : s)
        {
            if (c == ')')
            {
                int ok = 0;
                while (!st.empty() && st.top() != '(')
                {
                    char x = st.top();
                    st.pop();
                    if (x == '+' || x == '-' || x == '*' || x == '/')
                        ok = 1;
                }
                st.pop();
                if (!ok)
                    check = 1;
            }
            else
            {
                st.push(c);
            }
        }
        if (check)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}