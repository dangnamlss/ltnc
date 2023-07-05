#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 100;

int checkRows(char board[][SIZE], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 4; j++) {
            if (board[i][j] == 'O' && board[i][j + 1] == 'O' && board[i][j + 2] == 'O' &&
                board[i][j + 3] == 'O' && board[i][j + 4] == 'O') {
                return 1; // Quân O thắng
            }
            if (board[i][j] == 'X' && board[i][j + 1] == 'X' && board[i][j + 2] == 'X' &&
                board[i][j + 3] == 'X' && board[i][j + 4] == 'X') {
                return -1; // Quân X thắng
            }
        }
    }
    return 0; // Không ai thắng
}

int checkColumns(char board[][SIZE], int m, int n) {
    for (int i = 0; i < m - 4; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 'O' && board[i + 1][j] == 'O' && board[i + 2][j] == 'O' &&
                board[i + 3][j] == 'O' && board[i + 4][j] == 'O') {
                return 1; // Quân O thắng
            }
            if (board[i][j] == 'X' && board[i + 1][j] == 'X' && board[i + 2][j] == 'X' &&
                board[i + 3][j] == 'X' && board[i + 4][j] == 'X') {
                return -1; // Quân X thắng
            }
        }
    }
    return 0; // Không ai thắng
}

int checkDiagonals(char board[][SIZE], int m, int n) {
    for (int i = 0; i < m - 4; i++) {
        for (int j = 0; j < n - 4; j++) {
            if (board[i][j] == 'O' && board[i + 1][j + 1] == 'O' && board[i + 2][j + 2] == 'O' &&
                board[i + 3][j + 3] == 'O' && board[i + 4][j + 4] == 'O') {
                return 1; // Quân O thắng
            }
            if (board[i][j] == 'X' && board[i + 1][j + 1] == 'X' && board[i + 2][j + 2] == 'X' &&
                board[i + 3][j + 3] == 'X' && board[i + 4][j + 4] == 'X') {
                return -1; // Quân X thắng
            }
        }
    }

    for (int i = 0; i < m - 4; i++) {
        for (int j = 4; j < n; j++) {
            if (board[i][j] == 'O' && board[i + 1][j - 1] == 'O' && board[i + 2][j - 2] == 'O' &&
                board[i + 3][j - 3] == 'O' && board[i + 4][j - 4] == 'O') {
                return 1; // Quân O thắng
            }
            if (board[i][j] == 'X' && board[i + 1][j - 1] == 'X' && board[i + 2][j - 2] == 'X' &&
                board[i + 3][j - 3] == 'X' && board[i + 4][j - 4] == 'X') {
                return -1; // Quân X thắng
            }
        }
    }

    return 0; // Không ai thắng
}

int checkWinner(char board[][SIZE], int m, int n) {
    int rows = checkRows(board, m, n);
    int columns = checkColumns(board, m, n);
    int diagonals = checkDiagonals(board, m, n);

    if (rows == 1 || columns == 1 || diagonals == 1) {
        return 1; // Quân O thắng
    } else if (rows == -1 || columns == -1 || diagonals == -1) {
        return -1; // Quân X thắng
    } else {
        return 0; // Không ai thắng
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    char board[SIZE][SIZE];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    int winner = checkWinner(board, m, n);

    cout << winner << endl;

    return 0;
}
