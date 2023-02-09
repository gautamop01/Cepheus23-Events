#include <bits/stdc++.h>
using namespace std;
// OP OR WOT
const int N = 100005;
vector<int> g[N];
int T, n, x, y, dis[N];
bool vis[N];

void bfs(int start) {
    memset(dis, 0, sizeof(dis));
    memset(vis, 0, sizeof(vis));
    queue<int> q;
    q.push(start);
    vis[start] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 0; i < g[u].size(); i++) {
            int v = g[u][i];
            if (!vis[v]) {
                vis[v] = true;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 1; i <= n; i++) g[i].clear();
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        cin >> x >> y;
        bfs(x);
        if (dis[y] % 2 == 0) cout << "Cipher1" << endl;
        else cout << "Cipher2" << endl;
    }
    return 0;
}
