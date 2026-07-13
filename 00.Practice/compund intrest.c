#include<stdio.h>
#include<conio.h>

  void main()
    {
      float p,rate,n,time,ci;
      printf("Principal ampount :'");
       scanf ("%f",&p);

       printf("Intrest rate :");
        scanf("%f",&rate);

        printf("Number of years:");
         scanf("%f",&n);

         printf("preiod of time in terms of years :");
          scanf("%f",&time);

          ci=p*(rate/n)*n*time;

          printf("\n Compund Intrest=%f",ci);
           
    }
