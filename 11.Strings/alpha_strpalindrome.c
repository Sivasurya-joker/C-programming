#include<stdio.h>
#include<string.h>

char string[20];
int flag = 0;

void get_the_alpha_strpalindrome()
{
    printf("Enter the word: ");
    scanf("%19s", string);
}

void check_palindrome_or_not()
{
    int len = strlen(string);

    for(int i = 0; i < len / 2; i++)
    {
        if(string[i] != string[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
}

void print_the_palindrome()
{
    if(flag)
        printf("%s is not a palindrome\n", string);
    else
        printf("%s is a palindrome\n", string);
}

int main()
{
    get_the_alpha_strpalindrome();
    check_palindrome_or_not();
    print_the_palindrome();

    return 0;
}