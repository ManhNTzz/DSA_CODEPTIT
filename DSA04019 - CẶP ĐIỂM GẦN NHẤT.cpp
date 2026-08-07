#include <bits/stdc++.h>
using namespace std;

// Cre by ManhNTzz

struct Point
{
    double x, y;
    bool operator<(const Point &p) const
    {
        return x < p.x;
    }
};

inline double dist(Point a, Point b)
{
    return hypot(a.x - b.x, a.y - b.y);
}

double closest_pair(int l, int r, vector<Point> &P)
{
    if (l >= r)
        return 1e18;

    int mid = l + (r - l) / 2;
    Point midPoint = P[mid];
    double d = min(closest_pair(l, mid, P), closest_pair(mid + 1, r, P));

    vector<Point> strip;
    for (int i = l; i <= r; ++i)
    {
        if (abs(P[i].x - midPoint.x) < d)
        {
            strip.push_back(P[i]);
        }
    }

    sort(strip.begin(), strip.end(), [](const Point &a, const Point &b)
         { return a.y < b.y; });

    int sz = strip.size();
    for (int i = 0; i < sz; ++i)
    {
        for (int j = i + 1; j < sz && (strip[j].y - strip[i].y) < d; ++j)
        {
            d = min(d, dist(strip[i], strip[j]));
        }
    }

    return d;
}

void solve()
{
    int n;
    if (!(cin >> n))
        return;

    vector<Point> P(n);
    for (int i = 0; i < n; ++i)
        cin >> P[i].x >> P[i].y;

    sort(P.begin(), P.end());
    cout << fixed << setprecision(6) << closest_pair(0, n - 1, P) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    if (cin >> t)
    {
        while (t--)
            solve();
    }
    return 0;
}