#include <iostream>
#include <set>
#include <utility>

using namespace std;

const int HUMAN_MOVE = 1;
const int BOT_MOVE = 2;

class TicTacToe
{
public:
    int board[3][3];
    bool humanTurn;
    TicTacToe()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = 0;
            }
        }
    }

    void restartGame()
    {
        TicTacToe();
        humanTurn = true;
    }
    bool checkWin()
    {
        // Check rows and columns
        for (int i = 0; i < 3; i++)
        {
            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0) ||
                (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0))
            {
                return true;
            }
        }

        // Check diagonals
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0) ||
            (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0))
        {
            return true;
        }

        return false;
    }
    /*
        If selected cell is empty and humanTurn is true
    */
    void humanPlay(int x, int y)
    {
        if (board[x][y] == 0 && humanTurn)
        {
            board[x][y] = HUMAN_MOVE;
            humanTurn = false;
        }
    }

    void botPlay()
    {
        set<pair<int, int>> emptyCells;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == 0)
                {
                    emptyCells.insert(make_pair(i, j));
                }
            }
        }

        int move = rand() % emptyCells.size();

        auto it = emptyCells.begin();
        advance(it, move);

        int x = it->first;
        int y = it->second;

        board[x][y] = BOT_MOVE;
        humanTurn = true;
    }

    void render()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                char symbol;
                if (board[i][j] == 0)
                {
                    symbol = '-';
                }
                else if (board[i][j] == 1)
                {
                    symbol = 'X';
                }
                else
                {
                    symbol = 'O';
                }
                cout << symbol << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    char choice;

    do
    {
        TicTacToe game;

        int x, y;

        do
        {   
            game.render();

            if (game.checkWin())
            {
                if (!game.humanTurn)
                {
                    cout << "You win!" << endl;
                }
                else
                {
                    cout << "Bot wins!" << endl;
                }
                break;
            }

            if (game.humanTurn)
            {
                cout << "Your turn (row column): ";
                cin >> x >> y;
                game.humanPlay(x, y);
            }
            else
            {
                cout << "Bot's turn: " << endl;
                game.botPlay();
            }

        } while (true);

        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            game.humanTurn = true;
        }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}