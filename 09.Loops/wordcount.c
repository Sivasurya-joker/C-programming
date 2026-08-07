#include <stdio.h>

char word[100];
int vowel = 0;
int consonants = 0;

void get_the_input()
{
    printf("Word: ");
    scanf("%99s", word);
}

void count_the_word()
{
    int i;

    vowel = 0;
    consonants = 0;

    for(i = 0; word[i] != '\0'; i++)
    {
        char ch = word[i];

        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;   

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowel++;
        else if(ch>='a' && ch<='z')
            consonants++;
    }
}

void print_the_count()
{
    printf("No of vowels      : %d\n", vowel);
    printf("No of consonants  : %d\n", consonants);
}

int main()
{
    get_the_input();
    count_the_word();
    print_the_count();

    return 0;
}