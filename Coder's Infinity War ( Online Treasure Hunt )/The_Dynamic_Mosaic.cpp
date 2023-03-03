/*
The mosaic is constructed of a checkered landscape of cells, each possessing a primeval disposition - either thriving (symbolized by a 1) or dormant (signified by a 0). Each cell communes with its neighboring eight cells (lateral, vertical, diagonal) through the following four edicts (drawn from the cited Wikipedia entry):

A thriving cell, with less than two thriving neighbors, perishes as if by scarcity of sustenance.
A thriving cell, with two or three thriving neighbors, continues to flourish into the subsequent epoch.
A thriving cell, with more than three thriving neighbors, withers away as if by excess of society.
A dormant cell, with exactly three thriving neighbors, awakens to life as if by procreation.
The subsequent epoch is crafted by applying these edicts simultaneously to every cell in the current epoch, where births and deaths transpire synchronously. Given the current state of the checkered landscape, return the subsequent epoch.

Input Format

The first line contains the number of test cases.
Each test case consist of m+1 lines, the first line contains 2 space-seperated integers m,n(m-rows,n-columns).
Next m lines contains array of integers, each of size n.
Constraints

2 <= nums.length <= 2 * 105
nums.length is even
1 <= |nums[i]| <= 105
nums consists of equal number of positive and negative integers.
Output Format

Return the subsequent epoch or return the next state.

Sample Input 0

2 
4 3 
0 1 0
0 0 1
1 1 1
0 0 0 
2 2
1 1
1 0
Sample Output 0

0 0 0
1 0 1
0 1 1
0 1 0 
1 1
1 1

*/



#include <iostream>
#include <vector>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

bool isValid(int x, int y, int rows, int cols) {
    return x >= 0 && x < rows && y >= 0 && y < cols;
}

int countAliveNeighbors(vector<vector<int>>& board, int x, int y, int rows, int cols) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (isValid(newX, newY, rows, cols) && board[newX][newY] == 1) {
            count++;
        }
    }
    return count;
}

vector<vector<int>> getNextState(vector<vector<int>>& board, int rows, int cols) {
    vector<vector<int>> nextState(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int count = countAliveNeighbors(board, i, j, rows, cols);
            if (board[i][j] == 1) {
                if (count < 2 || count > 3) {
                    nextState[i][j] = 0;
                } else {
                    nextState[i][j] = 1;
                }
            } else {
                if (count == 3) {
                    nextState[i][j] = 1;
                } else {
                    nextState[i][j] = 0;
                }
            }
        }
    }
    return nextState;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> board(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> board[i][j];
            }
        }
        vector<vector<int>> nextState = getNextState(board, m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << nextState[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
