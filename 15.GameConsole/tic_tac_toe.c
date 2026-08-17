#include <stdio.h>

void show_game()
{
    printf("\n--- TIC TAC TOE ---\n");
}

void create_board(char board[3][3])
{
    char count = '1';

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = count;
            count++;
        }
    }
}

void display_board(char board[3][3])
{
    printf("\n");

    for(int i = 0; i < 3; i++)
    {
        printf(" %c   %c   %c \n",
               board[i][0],
               board[i][1],
               board[i][2]);
    }

    printf("\n");
}

int check_move(char board[3][3], int plot)
{
    int x = (plot- 1) / 3;
    int y = (plot- 1) % 3;

    if(plot < 1 || plot > 9)
    {
        return 0;
    }

    if(board[x][y] == 'X' || board[x][y] == 'O')
    {
        return 0;
    }

    return 1;
}

void make_move(char board[3][3], int plot, char player)
{
    int x= (plot - 1) / 3;
    int y = (plot- 1) % 3;

    board[x][y] = player;
}

int check_winner(char board[3][3], char player)
{
    // Rows
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == player &&
           board[i][1] == player &&
           board[i][2] == player)
        {
            return 1;
        }
    }

    // Columns
    for(int j = 0; j < 3; j++)
    {
        if(board[0][j] == player &&
           board[1][j] == player &&
           board[2][j] == player)
        {
            return 1;
        }
    }

    // Main diagonal
    if(board[0][0] == player &&
       board[1][1] == player &&
       board[2][2] == player)
    {
        return 1;
    }

    // Other diagonal
    if(board[0][2] == player &&
       board[1][1] == player &&
       board[2][0] == player)
    {
        return 1;
    }

    return 0;
}

int main()
{
    char board[3][3];
    char player = 'X';
    int plot;

    show_game();

    create_board(board);

    for(int turn = 0; turn < 9; )
    {
        display_board(board);

        printf("Player %c, enter position: ", player);
        scanf("%d", &plot);

        if(!check_move(board, plot))
        {
            printf("Invalid position! Try again.\n");
            continue;
        }

        make_move(board, plot, player);

        turn++;

        if(check_winner(board, player))
        {
            display_board(board);
            printf("Player %c Wins!\n", player);
            return 0;
        }

        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    display_board(board);
    printf("Game Draw!\n");

    return 0;
}