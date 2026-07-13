#include<stdio.h>
 
 int main(){
    // get the size limit.
    int n;
    printf ("Enter size of the array :\n");
    scanf("%d",&n);
     
     int arr[n];

    // Enter the array list .
    printf(" Enter the list of array list:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    //print the array elements.
    printf("Original array :\n");
      for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
    } 
    //function for reverse
     int a = 0, r = n - 1;
     while(a < r) {
        int temp = arr[a];
        arr[a] = arr[r];
        arr[r] = temp;
        a++;
        r--;
    }

    //Reverse array elements. 
    printf("\nReversed array:\n");
     for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
   return 0;
 }
