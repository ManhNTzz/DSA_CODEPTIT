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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, ktra, j;
    cin >> n;
    vector<int> a(n);
    REP(i, n)
    cin >> a[i];
    REP(i, n)
    {
        ktra = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > ktra)
        {
            swap(a[j + 1], a[j]);
            j--;
        }
        a[j + 1] = ktra;
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++)
            cout << a[j] << ' ';
        cout << endl;
    }
    return 0;
}
