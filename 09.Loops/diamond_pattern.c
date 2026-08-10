#include<stdio.h>

int get_input_for_diamond()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);

    if (n%2==0){
        printf("Your given input is Even Number\n");
    }
    else {
        printf("Your given input is Odd Number\n");
    }
    return n;
}

void print_the_diamond(int n)
{
    int i,j,k;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");

        for(k=1;k<=2*i-1;k++)
            printf("*");

        printf("\n");
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");

        for(k=1;k<=2*i-1;k++)
            printf("*");

        printf("\n");
    }
}

int main()
{
    int n;

    n = get_input_for_diamond();

    print_the_diamond(n);

    return 0;
}