/*
Recruitment of the Cepheus Cipher is underway!! Selection is done based on a game which is played by two competitors Cipher1 and Cipher2 . Winner will be promoted to the position of Cepheus Cipher. There are n planets. Two planets are connected by a special undirected path. Both the players can travel through these paths only. Configuration represents a tree.

A tree is a connected undirected graph with no cycles.

In each move, a player is allowed to move to any of the empty adjacent planet from his/her current position. The player cannot be stationary during his/her move. Player loses if he/she has no more moves to make . Find the winner of the game if both players play optimally.

Cipher1 plays first.

A planet is empty if there is no player in it.

Input Format

The first line of the input contains the number of test cases t.

For each testcase, first line contains the number of planets n.

The next n-1 lines contain the pair of the planets (a,b) which are directly connected by a special path.

The last line contains the starting position of the Cipher1 and Cipher2, x and y respectively.

Constraints

1 <= t <= 2*104

1 <= n <= 105

1 <= a, b, x , y <= n

a != b

Sum of n over all test cases does not exceed 2*105

Output Format

For each test case print the winner of the game.

Output is Case Sensitive

Sample Input 0
3
4
2 1
4 3
3 1
1 4
2
1 2
1 2
4
3 1
2 4
3 4
2 4
Sample Output 0

Cipher1
Cipher2
Cipher2
Explanation 0

In the first testcase if Cipher1 moves from planet 1 to planet 3 then Cipher2 would have no more moves left.

In the second testcase Cipher1 has no moves since both the planets are occupied hence Cipher2 wins.
*/

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
