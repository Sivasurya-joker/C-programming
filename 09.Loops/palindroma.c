#include <stdio.h>

int get_user_input()
{
    int n;

    printf("Enter the num: ");
    scanf("%d", &n);

    return n;//update 
}

int reverse(int n)
{
    int rev = 0;

    while (n > 0)
    {
        int digit = n % 10;      // Remove last digit
        rev = rev * 10 + digit;  // Build reverse
        n /= 10;                 // Remove last digit
    }

    return rev;
}

int palindrome(int n)
{
    int original = n;
    int rev = reverse(n);

    if (original == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void print_palindrome(int n)//update 
{
    if (palindrome(n))
    {
        printf("Yes, it is a Palindrome.\n");
    }
    else
    {
        printf("No, it is not a Palindrome.\n");
    }
}

int main()
{
    int n;

    n = get_user_input();

    print_palindrome(n);

    return 0;
}