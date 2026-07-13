#include <stdio.h>

int main() {
    int n;
    int a;   
    int b;   

    printf("The input size limit: ");
    scanf("%d", &n);

    int arr[n + 1];  

    printf("Enter the list of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the insert value: ");
    scanf("%d", &a);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &b);
    
    while (b < 1 || b > n + 1) {
        printf("Invalid! Enter position (1 to %d): ", n + 1);
        scanf("%d", &b);
    }
                 
    int pos = b - 1;
    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = a;

    printf("\nPrint the array elements are:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


//Insert means of that creating thr enwe arry element with memory allocation.
