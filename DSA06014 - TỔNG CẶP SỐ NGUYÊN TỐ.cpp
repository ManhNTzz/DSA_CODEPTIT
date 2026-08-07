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

#define LIMIT (int)1e6
vector<bool> isPrime(LIMIT + 1, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= sqrt(LIMIT); i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= LIMIT; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    sieve();
    int T;
    cin >> T;
    while (T--)
    {
        int M;
        cin >> M;
        bool ok = false;
        for (int i = 2; i < M; i++)
        {
            if (isPrime[i] && isPrime[M - i])
            {
                cout << i << " " << M - i << endl;
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << "-1" << endl;
    }
    return 0;
}
