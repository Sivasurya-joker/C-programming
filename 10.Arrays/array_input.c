#include <stdio.h>

int main()
{
    int n;
    //input limit 
    printf("The input size limit: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the list of array:\n");

    // Input value
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("\nPrint the %d array elements are:\n", n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}