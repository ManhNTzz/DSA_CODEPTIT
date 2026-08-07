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

// Cre by ManhNTzz

const int INF = 1e9;
int a[1005][1005];
int n, m;
bool vs[1005];
void BFS(int u)
{
    vs[u] = true;
    queue<int> qe;
    qe.push(u);
    while (!qe.empty())
    {
        int x = qe.front();
        qe.pop();
        FOR(i, 1, n)
        {
            if (!vs[i] && a[x][i])
            {
                qe.push(i);
                vs[i] = true;
            }
        }
    }
}
int demtplt()
{
    int cnt = 0;
    FOR(i, 1, n)
    {
        if (vs[i])
            continue;
        BFS(i);
        cnt++;
    }
    return cnt;
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
        cin >> n >> m;
        memset(vs, false, sizeof(vs));
        memset(a, 0, sizeof(a));
        REP(i, m)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = a[y][x] = 1;
        }
        cout << demtplt() << endl;
    }
    return 0;
}