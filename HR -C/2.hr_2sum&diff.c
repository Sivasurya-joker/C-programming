#include <stdio.h>
int  main (){
int a,b;
float m,n;

scanf("%d %d",&a,&b);
scanf("%f %f",&m,&n);

printf("%d %d\n",a+b,a-b);
printf("%.1f %.1f\n",m+n,m-n);
return 0;
}