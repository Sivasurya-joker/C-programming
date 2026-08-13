#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void get_the_word(char word[])
{
    printf("Enter the word: ");
    scanf("%1999s", word);
}

int store_the_word(char word[])
{
    int n;
    n = strlen(word);
    return n;
}

void check_the_word(char word[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);

        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
}

int main()
{
    srand(time(NULL));

    char word[2000];
    int n;

    get_the_word(word);

    n = store_the_word(word);

    check_the_word(word, n);

    printf("Scrambled word: %s\n", word);

    return 0;
}