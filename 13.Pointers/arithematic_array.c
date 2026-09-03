#include<stdio.h>
int main ()
{
 int suspicious_ports;

  printf("Enter the no of port address =");
  scanf("%d",&suspicious_ports);

  int *ipaddress =&suspicious_ports;
   for (int i = 0; i < suspicious_ports; i++)
    {
        printf("Port %d: %d\n", i + 1, *(ipaddress+i));
    }
 return 0;
}