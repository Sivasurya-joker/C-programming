#include<stdio.h>

void getInput(int size1, int size2, int arr[size1][size2]) {
        printf("enter the elements of  :\n");
    
        for (int i=0;i<size1;i++){
            
            for(int j=0;j<size2;j++){
                scanf("%d",&arr[i][j]);
                
            }
            
            printf("\n");
        }
    
}
int print2dArray(int size1,int size2,int arr[size1][size2]){
       for (int i=0;i<size1;i++){
        
        for(int j=0;j<size2;j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
        
    }  
    
}

int main (){
    
    int size1;
    int size2;
    
     printf ("number  of rows:\n");
        scanf("%d",&size1);

        printf("number  of columns:\n");
        scanf("%d",&size2);

        int arr[size1][size2];

    
        //get the input arr 
        getInput (size1,size2,arr);
    
        // print the 2 array
        print2dArray(size1,size2,arr);
        
    return 0; 
}