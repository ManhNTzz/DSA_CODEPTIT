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

// Cre by ManhNTzz

int n, a[1005];
unordered_map<int, int> freq;
bool cmp(int x, int y)
{
    if (freq[x] != freq[y])
    {
        return freq[x] > freq[y];
    }
    return x < y;
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
        freq.clear();
        REP(i, n)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        sort(a, a + n, cmp);
        REP(i, n)
        cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
