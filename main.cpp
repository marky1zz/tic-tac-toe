#include <iostream>

using namespace std;

void checkwinner(char grid[3][3])
{
    int i;
    for (i=0; i<=2; i++)
    {
        if(grid[i][0]==grid[i][1] && grid[i][1]==grid[i][2])
        {
            cout << " Winner is : " <<grid[i][0] << endl;
            exit(0);
        }

        if(grid[0][i]==grid[1][i] && grid[1][i]==grid[2][i])
        {
            cout << " Winner is : " <<grid[0][i] << endl;
            exit(0);
        }
    }
    i = 0;
    if(grid[i][i]==grid[i+1][i+1] && grid[i+1][i+1]==grid[i+2][i+2])
    {
        cout << " Winner is : " <<grid[i][i] << endl;
        exit(0);
    }

    i = 0;
    if(grid[i][i+2]==grid[i+1][i+1] && grid[i+1][i+1]==grid[i+2][i])
    {
        cout << "Winner is : " <<grid[0][2] << endl;
        exit(0);
    }
}

char toggleplayer(char player)
{
    if (player == 'X') return player = 'O';
    else if (player == 'O') return player = 'X';
}

int main()
{

    char grid[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int pick, start = 1;
    char player = 'O';

    while (start == 1)
    {
        player = toggleplayer(player);
        system("cls");
        cout <<  " " << grid[0][0] << " " << "|" << " " << grid[0][1] << " " << "|" << " " << grid[0][2] << endl;
        cout << "___|___|___" << endl;
        cout <<  " " << grid[1][0] << " " << "|" << " " << grid[1][1] << " " << "|" << " " << grid[1][2] << endl;
        cout << "___|___|___" << endl;
        cout <<  " " << grid[2][0] << " " << "|" << " " << grid[2][1] << " " << "|" << " " << grid[2][2] << endl;
        cout << "   |   |   " << endl;

        checkwinner(grid);
        cout << " " << player << "'s turn : ", cin >> pick;

        if (pick == 1) grid[0][0] = player;
        if (pick == 2) grid[0][1] = player;
        if (pick == 3) grid[0][2] = player;
        if (pick == 4) grid[1][0] = player;
        if (pick == 5) grid[1][1] = player;
        if (pick == 6) grid[1][2] = player;
        if (pick == 7) grid[2][0] = player;
        if (pick == 8) grid[2][1] = player;
        if (pick == 9) grid[2][2] = player;

    }
    return 0;
}
