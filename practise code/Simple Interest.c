


#include <stdio.h>

void main()  
{
    float a, b, c; 
    int d; 

    printf("Enter values of Principal (a), Rate (b), and Time (d):\n");
    scanf("%f %f %d", &a, &b, &d); 

    c = (a * b * d) / 100; 

    printf("Amount = Rs.%.2f\n", a); 
    printf("Rate = Rs.%.2f\n", b);
    printf("Time = %d years\n", d);
    printf("Simple Interest = Rs.%.2f\n", c); 
}
