#include<stdio.h>
int printArray(int n,int arr[]){  
    printf("this are the array elements:\n");
    for(int i=0;i<n;i++){
     printf(" %d",arr[i]);
    }}


int GetArray(int n,int arr[] ) {
    printf("Enter the list of array elements:");
     for(int i=0;i<n;i++ ){
         scanf("%d",&arr[i]);
        }
    return arr;
    }  

int checkIndex(int n,int arr[]){  
    int a;
    int b=0;

     printf("\n Choose the value from the array:\n");
     scanf("%d",&a);
    
    for(int i=0;i<n;i++){
        if (arr[n-1]==a){
            printf("%d is the last number of array\n",a);
            b=1;
            break;
        }
    if (arr[i]==a){

        printf("The next number of %d is %d",a,arr[i+1]);
        b=1;
        break;
    }
  
    }
   
 return b;
}


int main(){
    int n;


    // input size 
     printf(" Give the size limit:");
     scanf("%d",&n);

     int arr[n];
     

    // input value
    
    arr[n]=GetArray(n,arr);
    // print the array elements.
    printArray(n,arr);

    // Select the value.
   int b=checkIndex(n,arr);
    while (b==0){
    printf("Enter the num in array:\n");
    printArray(n,arr);
    b=checkIndex(n,arr);

    }
  
    return 0;


    
}
