#include <stdio.h>

int main()
{
    int n;

    printf("Enter the count for array creation : ");
    scanf("%d", &n);

    int numberbox[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &numberbox[i]);
    }

    for (int i = 0; i < n; i++)
    {
    printf("array element %d: %d\n", i, numberbox[i]);   
    }

    int *access = numberbox;

    int count_odd = 0;
    int count_even = 0;

    for (int i = 0; i < n; i++)
    {
        if (*access % 2 != 0)
        {
            count_odd++;
        }

        if (*access % 2 == 0)
        {
            count_even++;
        }

        access++;
    }

    printf("\nNumber of odd elements in array: %d", count_odd);
    printf("\nNumber of even elements in array: %d", count_even);

    return 0;
}