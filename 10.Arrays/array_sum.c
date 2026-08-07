#include <stdio.h>

int getsum(int arr[], int n) { // input getting 
    int sum = 0;// first init val
    for(int i = 0; i < n; i++) { // loop consept
        sum += arr[i]; // sum initialize 
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the size:\n");
    scanf("%d", &n);

    int arr[n]; // arrya initalization

    printf("Enter array values:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = getsum(arr, n); // assign the sum in nwe var

    printf(" the final ans of given array elements is %d", ans); // print state

    return 0;
}
