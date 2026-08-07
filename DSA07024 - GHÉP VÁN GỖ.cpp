#include <bits/stdc++.h>
using namespace std;

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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        stack<int> st;
        int i = 0;

        int ans = 0;
        while (i < n)
        {
            if (st.empty() || a[st.top()] <= a[i])
            {
                st.push(i);
                i++;
            }
            else
            {
                int h = a[st.top()];
                st.pop();

                int d = 0;
                if (st.empty())
                    d = i;
                else
                    d = i - st.top();

                if (d >= h)
                    ans = max(ans, h);
            }
        }
        while (!st.empty())
        {
            int h = a[st.top()];
            st.pop();

            int d = 0;
            if (st.empty())
                d = n;
            else
                d = n - st.top();

            if (d >= h)
                ans = max(ans, h);
        }
        cout << ans << endl;
    }
    return 0;
}
