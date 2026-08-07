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

string operator*(string s, int b)
{
    if (s == "0" || b == 0)
        return "0";
    int n = s.length();
    string res(n, '0');
    int nho = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int sum = (s[i] - '0') * b + nho;
        res[i] = sum % 10 + '0';
        nho = sum / 10;
    }
    if (nho)
        res = to_string(nho) + res;
    return res;
}

int ucln(int a, int b)
{
    while (a != 0)
    {
        int x = a;
        a = b % a;
        b = x;
    }
    return b;
}

string solve(int n)
{
    vector<int> a;
    for (int i = n + 2; i <= 2 * n; i++)
        a.push_back(i);
    for (int i = 2; i <= n; i++)
    {
        int x = i;
        for (int j = 0; j < a.size(); j++)
        {
            if (x == 1)
                break;
            int k = ucln(x, a[j]);
            a[j] /= k;
            x /= k;
        }
    }
    string ans = "1";
    for (int i = 0; i < a.size(); i++)
        ans = ans * a[i];
    return ans;
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
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}