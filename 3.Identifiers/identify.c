#include<stdio.h>
int main(void){
    char name [20];
    int age;
    int total;
    char grade;
    int Tamil,English,Mathematics,Social,Science;
    printf("Type your Name:");
    scanf("%s",name);
    printf("type your age:");
    scanf("%d",&age);

    printf(" give your subject mark:\n");
    printf("Tamil:");
    scanf("%d",&Tamil);
    printf("English:");
    scanf("%d",&English);
    printf("Mathematics:");
    scanf("%d",&Mathematics);
    printf("Social:");
    scanf("%d",&Social);
    printf("Science:");
    scanf("%d",&Science);

    total = Tamil + English + Mathematics + Social + Science;
    printf("Total marks:%d\n",total);

    if (total>=90){
        printf ("your grade is A.\n your performance is good and excellent! ");
        scanf("%c",&grade);
        grade = 'A';
    }
    else if(total>=80){
        printf("your grade is B.\n your performance is  well done but need to aim high!!..");
        scanf("%c",&grade);
        grade = 'B';
    
    }
    else if(total>=70){
        printf("your grade is C and need to improve the focus in topics!!!....");
         scanf("%c",&grade);
         grade ='C';
    }
    else if (total>=60){
        printf("your grade is D and just passed not try to improve learing...");
         scanf("%c",&grade);
         grade ='D';
    }
    else {
        printf("your grade is F.\n your are failed ");
        scanf("%c",&grade);
        grade ='F';
    }
   return 0; 
}