#include<stdio.h>
int main(){
int login_id;

printf("enter the login_id:");
scanf("%d",&login_id);

int *datasize=&login_id;
int **storage=&datasize;

for (int i=0;i<login_id;i++)
{
   printf("%zu Bytes \n",sizeof(storage));
   printf("%zu Bytes \n",sizeof(datasize));

   return 0;
}
return 0;
}