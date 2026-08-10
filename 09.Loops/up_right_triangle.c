#include<stdio.h>

int get_the_input_valu_form_user()
{
    int das;
    printf("Enter the number:");
    scanf("%d",&das);
    return das;
}
void print_the_uprigth_trinagle(int das ){
    for (int i = das; i >= 1; i--){
        for (int j = 1; j <= i; j++){   
            printf("*");
        }
        printf("\n");
    }
}
int main (){
    int das;
    das =get_the_input_valu_form_user();
    print_the_uprigth_trinagle(das);

     return 0;
}