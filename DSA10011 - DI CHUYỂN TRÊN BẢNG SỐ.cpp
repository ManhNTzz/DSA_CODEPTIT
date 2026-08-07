#include <bits/stdc++.h>
using namespace std;

// Cre by ManhNTzz

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n + 1, vector<int>(m + 1));
        vector<vector<int>> dist(n + 1, vector<int>(m + 1, 1e9));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        dist[1][1] = a[1][1];
        pq.push({dist[1][1], {1, 1}});
        while (!pq.empty())
        {
            auto top = pq.top();
            pq.pop();
            int cost = top.first;
            int x = top.second.first;
            int y = top.second.second;
            if (cost > dist[x][y])
                continue;
            for (int k = 0; k < 4; k++)
            {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if (nx >= 1 && nx <= n && ny >= 1 && ny <= m)
                {
                    if (dist[nx][ny] > cost + a[nx][ny])
                    {
                        dist[nx][ny] = cost + a[nx][ny];
                        pq.push({dist[nx][ny], {nx, ny}});
                    }
                }
            }
        }
        cout << dist[n][m] << endl;
    }
    return 0;
}
