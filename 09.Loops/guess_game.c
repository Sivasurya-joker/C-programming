#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_number(int *n)
{
    printf("Choose the number from [1-100]: ");
    scanf("%d", n);
}

int guessingtime(int value, int n)
{
    if (n == value)
    {
        printf("Your guess is Right!!!\n");
        printf("You win the game!!!\n");
        return 1;
    }
    else if (n < value)
    {
        printf("Your guess is lower, Try Again!\n");
    }
    else
    {
        printf("Your guess is higher, Take another chance Again.\n");
    }

    return 0;
}

void endgame(int value)
{
    printf("\nYou lose the game.\n");
    printf("Thank you for playing the game.\n");
    printf("The number was: %d\n", value);
}

int main()
{
    srand(time(NULL));

    int value = rand() % 100 + 1;
    int n;
    int loop ;
    printf("change = %d",loop);
    scanf("%d",&loop);

    for (int i = 0; i < loop; i++)
    {
        printf("\nChance %d of %d\n", i + 1, loop);

        get_number(&n);

        if (guessingtime(value, n))
        {
            return 0;
        }
    }

    endgame(value);

    return 0;
}