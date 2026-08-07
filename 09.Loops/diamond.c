#include<stdio.h>

int get_input_for_diamond()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    return n;
}

void print_first_half_of_the_diamond(int n)
{
    int i,j,k;

    for(i=1;i<=n;i+=1)
    {
        for(j=1;j<=n-i/2;j++)
            printf(" ");

        for(k=1;k<=2/2*i-1;k++)
            printf("*");
        printf("\n");
    }
}

void print_second_half_of_the_diamond(int n)
{
    int i,j,k;

    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i/2;j++)
            printf(" ");

        for(k=1;k<=2/2*i-1;k++)
            printf("*");

        printf("\n");
    }
}

int main()
{
    int n;

    n = get_input_for_diamond();

    print_first_half_of_the_diamond(n);
    print_second_half_of_the_diamond(n);

    return 0;
}