#include <stdio.h>

void get_the_word(char *word)
{
    printf("Word : ");
    scanf("%99s", word);
}

void count_the_characters(char *word)
{
    int vowels = 0;
    int consonants = 0;
    char ch;

    for (int i = 0; word[i] != '\0'; i++)
    {
        ch = word[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            consonants++;
        }
    }

    printf("Vowels      : %d\n", vowels);
    printf("Consonants  : %d\n", consonants);
}

void print_the_vowels_and_consonents(char *word)
{
    char ch;

    for (int i = 0; word[i] != '\0'; i++)
    {
        ch = word[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel      : %c\n", ch);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("Consonant  : %c\n", ch);
        }
    }
}

int main()
{
    char word[100];

    get_the_word(word);
    count_the_characters(word);
    print_the_vowels_and_consonents(word);

    return 0;
}
