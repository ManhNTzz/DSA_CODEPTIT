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
const long long mod = 1000000007;

// Cre by ManhNTzz

vector<vector<ll>> fibo(vector<vector<ll>> a, vector<vector<ll>> b)
{
    vector<vector<ll>> res(2, vector<ll>(2));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % mod;
            }
        }
    }
    return res;
}

ll binPow(vector<vector<ll>> a, int n)
{
    vector<vector<ll>> base = {{1, 1}, {1, 0}};
    if (n == 1)
        return a[0][1];
    while (n > 0)
    {
        if (n % 2 == 1)
            base = fibo(base, a);
        n /= 2;
        a = fibo(a, a);
    }
    return base[0][1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n--;
        vector<vector<ll>> a = {{1, 1}, {1, 0}};
        cout << binPow(a, n) << endl;
    }
    return 0;
}