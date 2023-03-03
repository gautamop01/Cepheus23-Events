/*
Given an axb matrix containing two characters O's and X's, now capture all the regions that are surrounded by X's in all directions. The capturing in the sense turning all the O's in that region.

Input Format

Input consists of 3 parts

First part consists of the no. of test cases which you need to run.
Second part consists of the no. of rows and columns in the matrix respectively.
Third part consists of the matrix.
Constraints

1 <= array.row_length, array.column_length <= 200
array[i][j] is either X or O.
Output Format

Output should contain the rearranged matrix.

Sample Input 0

2
4 4
X X X X
X O O X
X X O X
X O X X
1 1
X
Sample Output 0

X X X X
X X X X
X X X X
X O X X
X
*/

#include <iostream>
#include <vector>

using namespace std;

const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};

void fill(vector<vector<char>> &board, int x, int y) {
  if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || board[x][y] != 'O') {
    return;
  }
  board[x][y] = '#';
  for (int i = 0; i < 4; i++) {
    fill(board, x + dx[i], y + dy[i]);
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int m, n;
    cin >> m >> n;
    vector<vector<char>> board(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> board[i][j];
      }
    }
    for (int i = 0; i < m; i++) {
      if (board[i][0] == 'O') {
        fill(board, i, 0);
      }
      if (board[i][n - 1] == 'O') {
        fill(board, i, n - 1);
      }
    }
    for (int j = 0; j < n; j++) {
      if (board[0][j] == 'O') {
        fill(board, 0, j);
      }
      if (board[m - 1][j] == 'O') {
        fill(board, m - 1, j);
      }
    }
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (board[i][j] == 'O') {
          board[i][j] = 'X';
        }
        if (board[i][j] == '#') {
          board[i][j] = 'O';
        }
      }
    }
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cout << board[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
