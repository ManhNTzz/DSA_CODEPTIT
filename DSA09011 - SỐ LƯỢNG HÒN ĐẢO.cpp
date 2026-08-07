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
#define vll vector<long long>
#define pb push_back
const long long mod = 1000000007;

// Cre by ManhNTzz

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int a[1005][1005];
int n, m;
void loang(int i, int j)
{
    a[i][j] = 0;
    REP(k, 8)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1)
        {
            loang(i1, j1);
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
        int cnt = 0;
        cin >> n >> m;
        REP(i, n)
        REP(j, m)
            cin >> a[i][j];
        REP(i, n)
        {
            REP(j, m)
            {
                if (a[i][j] == 1)
                {
                    cnt++;
                    loang(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}