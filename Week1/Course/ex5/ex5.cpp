#include <iostream>
#include <vector>

using namespace std;

int checkRows(const vector<vector<char>>& board, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= n - 5; j++)
        {
            if (board[i][j] == 'O' && board[i][j + 1] == 'O' && board[i][j + 2] == 'O' && board[i][j + 3] == 'O' && board[i][j + 4] == 'O')
                return 1;
            if (board[i][j] == 'X' && board[i][j + 1] == 'X' && board[i][j + 2] == 'X' && board[i][j + 3] == 'X' && board[i][j + 4] == 'X')
                return -1;
        }
    }

    return 0;
}

int checkCols(const vector<vector<char>>& board, int m, int n)
{
    for (int i = 0; i <= m - 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 'O' && board[i + 1][j] == 'O' && board[i + 2][j] == 'O' && board[i + 3][j] == 'O' && board[i + 4][j] == 'O')
            {
                return 1;
            }
            if (board[i][j] == 'X' && board[i + 1][j] == 'X' && board[i + 2][j] == 'X' && board[i + 3][j] == 'X' && board[i + 4][j] == 'X')
            {
                return -1;
            }
        }
    }

    return 0;
}

int checkMainDiagonal(const vector<vector<char>>& board, int m, int n)
{
    for (int i = 0; i <= m - 5; i++)
    {
        for (int j = 0; j <= n - 5; j++)
        {
            if (board[i][j] == 'O' && board[i + 1][j + 1] == 'O' && board[i + 2][j + 2] == 'O' && board[i + 3][j + 3] == 'O' && board[i + 4][j + 4] == 'O')
            {
                return 1;
            }
            if (board[i][j] == 'X' && board[i + 1][j + 1] == 'X' && board[i + 2][j + 2] == 'X' && board[i + 3][j + 3] == 'X' && board[i + 4][j + 4] == 'X')
            {
                return -1;
            }
        }
    }

    return 0;
}

int checkSecondaryDiagonal(const vector<vector<char>>& board, int m, int n)
{
    for (int i = 4; i < m; i++)
    {
        for (int j = 0; j <= n - 5; j++)
        {
            if (board[i][j] == 'O' && board[i - 1][j + 1] == 'O' && board[i - 2][j + 2] == 'O' && board[i - 3][j + 3] == 'O' && board[i - 4][j + 4] == 'O')
            {
                return 1;
            }
            if (board[i][j] == 'X' && board[i - 1][j + 1] == 'X' && board[i - 2][j + 2] == 'X' && board[i - 3][j + 3] == 'X' && board[i - 4][j + 4] == 'X')
            {
                return -1;
            }
        }
    }

    return 0;
}

int checkWinner(const vector<vector<char>>& board, int m, int n)
{
    int rows = checkRows(board, m, n);
    int cols = checkCols(board, m, n);
    int mainDiagonal = checkMainDiagonal(board, m, n);
    int secondaryDiagonal = checkSecondaryDiagonal(board, m, n);

    if (rows == 1 || cols == 1 || mainDiagonal == 1 || secondaryDiagonal == 1)
    {
        return 1;
    }
    else if (rows == -1 || cols == -1 || mainDiagonal == -1 || secondaryDiagonal == -1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<char>> board(m, vector<char>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }

    cout << checkWinner(board, m, n) << endl;

    return 0;
}
