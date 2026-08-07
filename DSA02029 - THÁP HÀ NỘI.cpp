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
#define endl '\n'
#define maxn 10000007

// Cre by ManhNTzz

void hanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << A << " -> " << C << endl;
        return;
    }
    hanoi(n - 1, A, C, B);
    cout << A << " -> " << C << endl;
    hanoi(n - 1, B, A, C);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
