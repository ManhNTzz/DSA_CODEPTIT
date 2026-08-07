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

int n;
int a[105], b[105];
bool vs[105];
int dem;
void Try(int i)
{
    FOR(j, 1, n)
    {
        if (!vs[j])
        {
            vs[j] = true;
            a[i] = j;
            if (i == n)
            {
                dem++;
                int ok = 0;
                FOR(i, 1, n)
                {
                    if (a[i] != b[i])
                    {
                        ok = 1;
                        break;
                    }
                }
                if (!ok)
                    cout << dem << endl;
            }
            else
                Try(i + 1);
            vs[j] = false;
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
        memset(vs, false, sizeof(vs));
        memset(b, 0, sizeof(b));
        FOR(i, 1, n)
        cin >> b[i];
        dem = 0;
        Try(1);
    }
    return 0;
}