#include<stdio.h>
void get_input_From_user(){
   int apache;
   printf("ehtr the input value:");
   scanf("%d",&apache);

}

void perform_do_wile_loop(){
   int apache;
do
{ printf("%d",apache);
   apache++;
} while (apache<=40);
}
int main (){
   get_input_From_user();
   perform_do_wile_loop();
   return 0;
 }