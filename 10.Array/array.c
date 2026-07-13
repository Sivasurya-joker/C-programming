// Array created
#include<stdio.h>
int main(){
int arr[]={60,78,34};
int size =sizeof(arr)/sizeof(arr[0]);
printf("%d",size);
 for(int i=0;i<size;i++){
printf("%d ",arr[i]);
}
 return 0;
}