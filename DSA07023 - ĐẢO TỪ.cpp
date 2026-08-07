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
    cin.ignore();
    while (T--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        stack<string> st;
        while (ss >> word)
        {
            st.push(word);
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }

        cout << endl;
    }
    return 0;
}