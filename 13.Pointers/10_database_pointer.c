#include <stdio.h>

int main()

{
    int n;

    printf("Enter the no of data inputs for store: ");
    scanf("%d", &n);

    int database[n];

    int *dataware_house = database;

    for (int i = 0; i < n; i++)
    {
        printf("Enter data %d: ", i + 1);
        scanf("%d", &database[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("data %d: %d\n", i + 1, *(dataware_house + i));
    }

    printf("Data are stored succesfully.");
    return 0;
}