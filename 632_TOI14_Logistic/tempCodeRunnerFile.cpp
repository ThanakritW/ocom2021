#include <bits/stdc++.h>
using namespace std;
struct node
{
    int n, w, f, s;
    bool friend operator<(node a, node b)
    {
        return a.w > b.w;
    }
};
int n, s, dt, d[105][105][2], f, m, cost[105], ta, tb, tc, ans = INT_MAX;
vector<pair<int, int>> v[105];
priority_queue<node> q;
node c;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> cost[i];
    cin >> s >> dt >> f;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> ta >> tb >> tc;
        v[ta].push_back({tb, tc});
        v[tb].push_back({ta, tc});
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= f; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                d[i][j][k] = INT_MAX;
            }
        }
    }
    q.push({s, 0, 0, 1});
    d[s][0][1] = 0;
    while (!q.empty())
    {
        c = q.top();
        q.pop();
        if (c.w > ans)
            break;
        if (c.w > d[c.n][c.f][c.s])
        {
            continue;
        }
        if (c.n == dt && c.f==f)
        {
            ans = min(ans, c.w);
        }
        if (c.s == 1)
        {
            if (d[c.n][f][0] > c.w)
            {
                d[c.n][f][0] = c.w;
                q.push({c.n, c.w, f, 0});
            }
        }
        if (c.f < f)
        {
            if (d[c.n][c.f + 1][c.s] > c.w + cost[c.n])
            {
                d[c.n][c.f + 1][c.s] = c.w + cost[c.n];
                q.push({c.n, c.w + cost[c.n], c.f + 1, c.s});
            }
        }
        for (auto e : v[c.n])
        {
            if (c.f >= e.second)
            {
                int lft = c.f - e.second;
                if (d[e.first][lft][c.s] > c.w)
                {
                    d[e.first][lft][c.s] = c.w;
                    q.push({e.first, c.w, lft, c.s});
                }
            }
        }
    }
    cout << ans;
    return 0;
}
