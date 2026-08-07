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
int n, m;
int parent[10005];
struct Edge
{
    int u, v, w;
};
vector<Edge> T;
int Find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = Find(parent[v]);
}
bool Union(int u, int v)
{
    u = Find(u);
    v = Find(v);
    if (u != v)
    {
        parent[v] = u;
        return true;
    }
    return false;
}
bool cmp(Edge a, Edge b)
{
    if (a.w == b.w && a.u == b.u)
        return a.v < b.v;
    else if (a.w == b.w)
        return a.u < b.u;
    return a.w < b.w;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int WT = 0;
        FOR(i, 1, n)
        parent[i] = i;
        T.resize(m);
        REP(i, m)
        {
            cin >> T[i].u >> T[i].v >> T[i].w;
        }
        sort(ALL(T), cmp);
        REP(i, m)
        {
            if (Union(T[i].u, T[i].v))
                WT += T[i].w;
        }
        cout << WT << endl;
    }
    return 0;
}