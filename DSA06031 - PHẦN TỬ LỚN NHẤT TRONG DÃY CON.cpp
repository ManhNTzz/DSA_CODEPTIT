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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        REP(i, n)
        cin >> a[i];
        deque<int> dq;
        REP(i, n)
        {
            if (dq.front() == i - k)
                dq.pop_front();
            while (!dq.empty() && a[dq.back()] <= a[i])
                dq.pop_back();
            dq.push_back(i);
            if (i + 1 >= k)
                cout << a[dq.front()] << " ";
        }
        cout << endl;
    }
    return 0;
}
