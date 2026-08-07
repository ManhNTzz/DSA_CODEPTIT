#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Cre by ManhNTzz

int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
int n;
ll res;

void Try(int i, int uoc, ll current)
{
    if (uoc == 1)
    {
        res = min(res, current);
        return;
    }

    for (int j = 2; j <= uoc; ++j)
    {
        if (uoc % j == 0)
        {
            // Tính p[i]^(j - 1)
            ll temp = 1;
            bool overflow = false;

            for (int k = 1; k < j; ++k)
            {
                // Kiểm tra chống tràn số long long và cắt nhánh nếu vượt quá res
                if (current > (res / p[i]) / temp)
                {
                    overflow = true;
                    break;
                }
                temp *= p[i];
            }

            if (!overflow && current * temp < res)
            {
                Try(i + 1, uoc / j, current * temp);
            }
        }
    }
}

void solve()
{
    cin >> n;
    res = 2e18;
    Try(0, n, 1);
    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    if (cin >> T)
    {
        while (T--)
        {
            solve();
        }
    }
    return 0;
}