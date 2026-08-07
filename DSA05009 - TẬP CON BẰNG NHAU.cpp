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
#define endl '\n'
#define maxn 10000007
const long long MOD = 1000000007;

// Cre by ManhNTzz

int n, sum;
int a[105];
bool stop;
void Try(int i, int s)
{
    if (i == n || stop || s == sum / 2)
    {
        if (s == sum / 2)
            stop = true;
        return;
    }
    if (s + a[i] <= sum / 2)
    {
        Try(i + 1, s + a[i]);
    }
    Try(i + 1, s);
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
        sum = 0;
        stop = false;
        FOR(i, 1, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0)
        {
            Try(1, 0);
        }
        if (stop)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
