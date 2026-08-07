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

int a[105], b[105], c[105];
int n, ans;
void Try(int i)
{
    FOR(j, 1, n)
    {
        if (!a[j] && !b[i + j - 1] && !c[i - j + n])
        {
            a[j] = b[i + j - 1] = c[i - j + n] = 1;
            if (i == n)
                ans++;
            else
                Try(i + 1);
            a[j] = b[i + j - 1] = c[i - j + n] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        ans = 0;
        Try(1);
        cout << ans << endl;
    }
    return 0;
}