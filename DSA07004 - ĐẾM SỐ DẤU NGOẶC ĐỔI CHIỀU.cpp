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
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        stack<char> st;
        for (char c : s)
        {
            if (c == '(')
                st.push(c);
            else
            {
                if (st.empty())
                {
                    cnt++;
                    st.push(c);
                }
                else
                    st.pop();
            }
        }
        cout << cnt + st.size() / 2 << endl;
    }
    return 0;
}