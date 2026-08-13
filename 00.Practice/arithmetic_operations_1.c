#include <stdio.h>

int get_the_value_form_the_user(){

    int a,b,c,d;

    printf("Ether the value to calculate for a:\n b:\n c\n: d:\n");

    scanf("%d %d %d %d",&a,&b,&c,&d);

    return a,b,c,d;
}


void print_the_result(int a,int b,int c,int d,
int result) {

    printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);

    result=a+b;
    printf("a+b=%d\n",result);

    result=a-b;
    printf("a-b=%d\n",result);

    result=a*c;
    printf("a*c=%d\n",result);

    result=a/d;
    printf("a/d=%d\n",result);
}

int main ()
{
    int a,b,c,d;
    int result;

    d = get_the_value_form_the_user();

    print_the_result(a,b,c,d,result);

    return 0;
}