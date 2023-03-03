/*
In the capital city of Cepheus Cipher, there lies a challenge for all knights to traverse a x grid filled with obstacles. The starting point is located at the upper left corner of the grid, represented by the block grid[0][0]. The objective is to reach the final destination, the lower right corner of the grid, represented by the block grid[N-1][N-1]. The Cipher can only move left, right, upward or downward through blocks marked with the value "1", while blocks marked with "0" are impassable obstacles. Will the Cipher successfully navigate the grid in the capital city? If it is possible then print "YES" otherwise "NO". (case sensitive)

Input Format

The first line contains a single integer  — the size of grid. Following  lines represent a 2D matrix of size .
There will be  lines which will contains  space separated integers either  or .
Constraints

 ≤  ≤ 
Output Format

Output a string either "YES" or "NO" (case sensitive) in a single line.

Sample Input 0

2
1 0
1 1
Sample Output 0

YES
Explanation 0

Cipher will move from (0,0)->(1,0)->(1,1) to reach (1,1) hence "YES".
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 55;
int n;
int g[N][N];
bool vis[N][N];

bool valid(int x, int y) {
return (x >= 0 && x < n && y >= 0 && y < n && g[x][y]);
}

bool dfs(int x, int y) {
if (x == n-1 && y == n-1) return true;
vis[x][y] = true;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
for (int i = 0; i < 4; i++) {
int nx = x + dx[i];
int ny = y + dy[i];
if (valid(nx, ny) && !vis[nx][ny]) {
if (dfs(nx, ny)) return true;
}
}
return false;
}

int main() {
cin >> n;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cin >> g[i][j];
}
}
if (dfs(0, 0)) cout << "YES\n";
else cout << "NO\n";
return 0;
}
