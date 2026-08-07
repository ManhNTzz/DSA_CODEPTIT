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
        int a[n];
        REP(i, n)
        cin >> a[i];
        stack<int> st;
        int R[n];
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && a[i] >= st.top())
                st.pop();
            if (st.empty())
                R[i] = -1;
            else
                R[i] = st.top();
            st.push(a[i]);
        }
        for (int i = 0; i < n; ++i)
            cout << R[i] << " ";
        cout << endl;
    }
    return 0;
}
