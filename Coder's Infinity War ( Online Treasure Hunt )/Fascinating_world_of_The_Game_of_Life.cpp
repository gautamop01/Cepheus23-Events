/*Imagine a grid made up of tiny cells, each with a life of its own. Some are alive (represented by 1s), and some are dead (represented by 0s). But, these little cells don't live in isolation. They interact with their eight neighboring cells and follow four simple rules to determine their fate.

If a live cell has fewer than two live neighbors, it dies from loneliness.
If a live cell has two or three live neighbors, it lives on to see another day.
If a live cell has more than three live neighbors, it dies from overcrowding.
If a dead cell has exactly three live neighbors, it comes back to life, ready to thrive!
So, buckle up and get ready for a wild ride as these cells dance to the beat of life and death. It's time to see what the next generation will look like!

Input Format

Input consists of 3 parts

First part consists of the no. of test cases needs to be evaluated.
Second part consists of two values which denote the no. of rows and columns respectively seperated by spaces.
Third part consists of the matrix which needs to be evaluated.
Constraints

1 <= array.rows, array.columns <= 25 array[i][j] is 0 or 1.

Output Format

Output should consists of the next state matrix

Sample Input 0

4
7 4
0 0 1 1 
0 1 1 0 
1 0 1 1 
0 1 1 0 
1 1 0 1 
0 0 0 1 
1 0 0 0 
23 19
1 0 0 1 1 0 0 0 0 1 0 0 1 1 0 1 1 1 1 
1 1 0 0 1 0 0 0 0 0 0 0 0 1 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 1 1 0 
1 0 1 1 1 0 1 0 0 0 1 0 1 1 1 1 0 0 1 
0 0 1 0 1 0 0 0 0 1 1 1 1 1 0 0 0 0 0 
1 0 1 0 0 0 1 0 0 0 0 1 0 0 0 0 1 1 0 
1 0 1 0 1 0 0 0 1 1 1 0 1 1 1 1 0 1 0 
0 1 0 0 0 0 1 0 1 0 0 0 1 1 1 1 1 0 0 
0 0 0 0 1 0 1 0 1 0 1 0 0 1 0 1 1 0 0 
0 1 1 0 0 1 1 0 1 1 1 1 1 0 1 0 1 1 1 
0 1 0 0 0 1 0 0 1 0 0 1 0 1 1 1 0 0 0 
1 0 1 0 1 0 0 0 0 1 0 1 0 0 0 1 1 0 1 
0 0 0 1 0 0 0 0 0 0 1 1 0 1 0 1 1 0 0 
0 0 1 1 1 0 0 0 0 0 0 0 1 0 1 0 0 0 0 
1 0 1 0 0 0 1 1 1 0 1 0 0 0 1 0 1 0 1 
0 0 1 0 1 1 1 1 0 0 0 0 0 1 1 1 0 1 0 
0 0 1 0 1 0 1 1 1 0 1 1 1 0 0 0 0 1 1 
1 0 1 1 1 0 1 1 1 1 1 1 0 0 1 0 0 0 0 
1 0 0 1 0 1 0 1 1 0 1 1 0 0 0 0 1 0 1 
1 1 1 0 0 0 1 0 0 0 0 1 1 1 0 0 1 1 1 
0 1 0 1 0 1 1 0 0 1 1 1 1 0 0 0 0 0 0 
1 0 1 0 0 0 1 0 1 1 0 0 1 0 0 1 1 1 1 
1 1 0 0 0 0 1 1 1 1 0 1 0 0 0 0 1 1 0 
6 12
0 1 1 0 1 1 1 1 0 1 1 0 
1 0 1 1 0 0 0 0 1 1 1 0 
0 0 1 0 0 1 1 0 0 0 1 0 
1 1 0 0 0 1 0 1 0 1 0 1 
1 1 0 0 1 0 1 1 0 0 1 0 
0 0 1 1 0 1 1 1 1 1 0 1 
25 3
0 0 0 
1 0 0 
1 0 1 
1 0 1 
0 1 0 
0 0 0 
1 0 1 
0 0 1 
1 0 1 
1 1 1 
0 1 0 
1 1 0 
1 0 0 
1 1 1 
0 0 1 
1 0 1 
0 1 0 
1 0 0 
0 0 0 
0 1 0 
0 0 0 
0 0 1 
0 1 0 
1 1 0 
1 0 1 
Sample Output 0

0 1 1 1 
0 0 0 0 
1 0 0 1 
0 0 0 0 
1 1 0 1 
1 1 1 0 
0 0 0 0 
1 1 0 1 1 0 0 0 0 0 0 0 1 1 1 0 1 1 0 
1 1 0 1 1 0 0 0 0 0 1 1 0 1 1 1 0 0 1 
1 0 1 0 1 1 0 0 0 0 1 1 0 0 0 1 1 1 0 
0 1 1 0 1 1 0 0 0 0 0 0 0 0 1 1 1 1 0 
0 0 1 0 1 0 0 0 0 1 0 0 0 0 0 1 1 1 0 
0 0 1 0 0 1 0 0 1 0 0 0 0 0 0 1 1 1 0 
1 0 1 1 0 1 0 0 1 1 1 0 0 0 0 0 0 1 0 
0 1 0 1 0 0 0 0 1 0 1 0 0 0 0 0 0 1 0 
0 1 1 0 0 0 1 0 1 0 1 0 0 0 0 0 0 0 0 
0 1 1 0 1 0 1 0 1 0 0 0 0 0 0 0 0 1 0 
1 0 0 1 1 1 1 1 1 0 0 0 0 1 0 0 0 0 1 
0 1 1 1 1 0 0 0 0 1 0 1 0 1 0 0 0 1 0 
0 1 0 0 0 0 0 0 0 0 1 1 0 1 0 0 1 1 0 
0 1 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 1 0 
0 0 1 0 0 0 0 0 1 0 0 0 0 0 0 0 1 1 0 
0 0 1 0 1 0 0 0 0 0 1 0 1 1 1 1 0 0 0 
0 0 1 0 0 0 0 0 0 0 0 0 1 0 0 1 1 1 1 
0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 
1 0 0 0 0 1 0 0 0 0 0 0 0 1 0 1 1 0 1 
1 0 0 1 0 0 0 0 1 0 0 0 0 1 0 0 1 0 1 
0 0 0 1 0 1 1 0 1 1 0 0 0 0 0 1 0 0 0 
1 0 1 0 0 0 0 0 0 0 0 0 1 0 0 1 0 0 1 
1 1 0 0 0 0 1 0 0 1 1 0 0 0 0 1 0 0 1 
0 1 1 0 1 1 1 1 0 0 1 0 
0 0 0 0 0 0 0 0 1 0 0 1 
1 0 1 1 1 1 1 1 0 0 0 1 
1 0 1 0 1 0 0 1 1 1 0 1 
1 0 0 1 1 0 0 0 0 0 0 1 
0 1 1 1 1 1 0 0 1 1 1 0 
0 0 0 
0 1 0 
1 0 0 
1 0 1 
0 1 0 
0 1 0 
0 1 0 
0 0 1 
1 0 1 
1 0 1 
0 0 0 
1 1 0 
0 0 1 
1 0 1 
1 0 1 
0 0 1 
1 1 0 
0 0 0 
0 0 0 
0 0 0 
0 0 0 
0 0 0 
1 1 1 
1 0 1 
1 0 0 
*/


#include <bits/stdc++.h>
using namespace std;
const int ROW = 25;
const int COL = 25;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool isValid(int x, int y, int row, int col) {
    return (x >= 0 && x < row && y >= 0 && y < col);
}

int countLiveNeighbors(int grid[][COL], int x, int y, int row, int col) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (isValid(newX, newY, row, col) && grid[newX][newY] == 1) {
            count++;
        }
    }
    return count;
}

void gameOfLife(int grid[][COL], int row, int col) {
    int newGrid[ROW][COL];
    memset(newGrid, 0, sizeof(newGrid));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int count = countLiveNeighbors(grid, i, j, row, col);
            if (grid[i][j] == 1) {
                if (count < 2) {
                    newGrid[i][j] = 0;
                } else if (count == 2 || count == 3) {
                    newGrid[i][j] = 1;
                } else if (count > 3) {
                    newGrid[i][j] = 0;
                }
            } else {
                if (count == 3) {
                    newGrid[i][j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            grid[i][j] = newGrid[i][j];
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int row, col;
        cin >> row >> col;
        int grid[ROW][COL];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> grid[i][j];
            }
        }
        gameOfLife(grid, row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
