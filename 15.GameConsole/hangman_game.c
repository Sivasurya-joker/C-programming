#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void game_name()
{
    printf("Hangman game\n");
}

int get_the_number_of_words()
{
    int n;

    printf("Enter the number of words: ");
    scanf("%d",&n);

    return n;
}

void create_the_list(int n,char list[n][20])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter word %d: ",i+1);
        scanf("%19s",list[i]);
    }
}

char* generate_the_randomword_from_list(int n,char list[n][20])
{
    int index;

    index=rand()%n;

    return list[index];
}

void hide(char word[],char hidden[])
{
    int length=strlen(word);

    for(int i=0;i<length;i++)
    {
        hidden[i]='_';
    }

    hidden[length]='\0';
}

char* get_the_guess()
{
    static char guess[20];

    printf("\nEnter your guess: ");
    scanf("%19s",guess);

    return guess;
}

int main()
{
    srand(time(NULL));

    int n;

    game_name();

    n=get_the_number_of_words();

    char list[n][20];
    char word[20];
    char hidden[20];

    create_the_list(n,list);

    strcpy(word,generate_the_randomword_from_list(n,list));

    hide(word,hidden);

    printf("\nHidden word: %s\n",hidden);

    char *guess=get_the_guess();

    if(strcmp(guess,word)==0)
    {
        printf("\nYES - You won!\n");
        printf("Word: %s\n",word);
    }
    else
    {
        printf("\nNO - Wrong guess!\n");
        printf("The word was: %s\n",word);
    }

    return 0;
}