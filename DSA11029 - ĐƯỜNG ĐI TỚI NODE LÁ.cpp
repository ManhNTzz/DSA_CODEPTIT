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

void DFS(int u, vector<int> path, vector<vector<int>> &dske, vector<vector<int>> &res)
{
    if (dske[u].size() == 0)
    {
        res.push_back(path);
        return;
    }

    for (int v : dske[u])
    {
        path.push_back(v);
        DFS(v, path, dske, res);
        path.pop_back();
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
        int n;
        cin >> n;

        vector<vector<int>> dske(n + 1);
        for (int i = 1; i <= n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            dske[x].push_back(y);
        }

        vector<vector<int>> res;
        DFS(1, {1}, dske, res);

        sort(res.begin(), res.end(), [](auto v, auto t) -> bool
             { return v[v.size() - 1] < t[t.size() - 1]; });

        for (auto v : res)
        {
            for (int x : v)
                cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}