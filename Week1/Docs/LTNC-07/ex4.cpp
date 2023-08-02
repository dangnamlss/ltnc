#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 100;
const int MAX_M = 100;

int n, m;
int maze[MAX_N][MAX_M];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};


bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}


bool findPath(int x, int y)
{
    if (x == n - 1 && y == m - 1)
    {
        maze[x][y] = 2;
        return true;
    }

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (isValid(nx, ny) && maze[nx][ny] == 0)
        {
            maze[x][y] = 2;

            if (findPath(nx, ny))
            {
                return true;
            }

            maze[x][y] = 0;
        }
    }

    return false;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
        }
    }

    if (findPath(0, 0))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << maze[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}