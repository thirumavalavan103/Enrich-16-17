#include<stdio.h>
 int main()
 {
     int a[10][10],i,j,k,x,y;
     printf("enter x,y,k values");
     scanf("%d%d%d",&x,&y,&k);
     for(i = 0 ;i < x;i++)
     {
         for(j = 0;j < y;j++)
         {
             if((i+j)==k)
             {
                 a[i][j] = 1;
             }
             else
             {
                 a[i][j] = 0;
             }
         }
     }
     for(i=0;i<x;i++)
     {
         printf("\n");
         for(j=0;j<y;j++)
         {
             printf("%d",a[i][j]);
        }
     }
 }
