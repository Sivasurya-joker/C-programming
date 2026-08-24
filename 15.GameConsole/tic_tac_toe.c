#include <stdio.h>

void show_game()
{
    printf("\n--- TIC TAC TOE ---\n");
}

int get_board_size()
{
    int n;

    printf("Enter the size of the board : ");
    scanf("%d", &n);

    return n;
}

void create_board(int n, int board[n][n])
{
    int count = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            board[i][j] = count;
            count++;
        }
    }
}

void display_board(int n, int board[n][n])
{
    printf("\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(board[i][j] == -1)
            {
                printf(" X ");
            }
            else if(board[i][j] == -2)
            {
                printf(" O ");
            }
            else
            {
                printf("%02d ", board[i][j]);
            }
        }

        printf("\n");
    }

    printf("\n");
}

int check_move(int n, int board[n][n], int plot)
{
    if(plot < 1 || plot > n * n)
    {
        return 0;
    }

    int x = (plot - 1) / n;
    int y = (plot - 1) % n;

    if(board[x][y] == -1 || board[x][y] == -2)
    {
        return 0;
    }

    return 1;
}

void make_move(int n, int board[n][n], int plot, char player)
{
    int x = (plot - 1) / n;
    int y = (plot - 1) % n;

    if(player == 'X')
        board[x][y] = -1;
    else
        board[x][y] = -2;
}

int check_winner(int n, int board[n][n], char player)
{
    int value;

    if(player == 'X')
        value = -1;
    else
        value = -2;

    // Rows
    for(int i = 0; i < n; i++)
    {
        int win = 1;

        for(int j = 0; j < n; j++)
        {
            if(board[i][j] != value)
            {
                win = 0;
                break;
            }
        }

        if(win)
            return 1;
    }

    // Columns
    for(int j = 0; j < n; j++)
    {
        int win = 1;

        for(int i = 0; i < n; i++)
        {
            if(board[i][j] != value)
            {
                win = 0;
                break;
            }
        }

        if(win)
            return 1;
    }

    // Main diagonal
    int win = 1;

    for(int i = 0; i < n; i++)
    {
        if(board[i][i] != value)
        {
            win = 0;
            break;
        }
    }

    if(win)
        return 1;

    // Other diagonal
    win = 1;

    for(int i = 0; i < n; i++)
    {
        if(board[i][n - 1 - i] != value)
        {
            win = 0;
            break;
        }
    }

    if(win)
        return 1;

    return 0;
}

int main()
{
    char player = 'X';
    int plot;
    int n;

    show_game();

    n = get_board_size();

    int board[n][n];

    create_board(n, board);

    int total_turns = n * n;

    for(int turn = 0; turn < total_turns; )
    {
        display_board(n, board);

        printf("Player %c, enter position: ", player);
        scanf("%d", &plot);

        if(!check_move(n, board, plot))
        {
            printf("Invalid position! Try again.\n");
            continue;
        }

        make_move(n, board, plot, player);

        turn++;

        if(check_winner(n, board, player))
        {
            display_board(n, board);
            printf("Player %c Wins!\n", player);
            return 0;
        }

        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    display_board(n, board);
    printf("Game Draw!\n");

    return 0;
}