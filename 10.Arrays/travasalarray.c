#include <stdio.h>
int main() {
    int n;
    // size getting 
    printf("The input size limit: ");
    scanf("%d", &n);
    
    int arr[n];

    // input data
    printf("Enter the list of array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 
    // print array
    printf("Print the array elements:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    } 
    // reverse array
    printf("\nReversed array:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
