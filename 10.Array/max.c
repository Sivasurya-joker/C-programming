#include <stdio.h>

int main() {
    int g;

    printf("Enter the limit:\n");
    scanf("%d", &g);

    int arr[g];

    // input array elements
    printf("Enter %d elements:\n", g);
    for (int i = 0; i < g; i++) {
        scanf("%d", &arr[i]);
    }

    //  intialize
    int ans = arr[0];

    // Find maximum value
    for (int i = 1; i < g; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }

    // Print array
    printf("Array elements: ");
    for (int i = 0; i < g; i++) {
        printf("%d ", arr[i]);
    }

    // Print maximum value
    printf("\nThe maximum value of the array: %d\n", ans);

    return 0;
}
