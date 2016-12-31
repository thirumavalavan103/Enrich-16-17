#include<stdio.h>
void main()
{
    int a[20],i,b,c,s=0;
    printf("\n enter the no.of elements: ");
    scanf("%d",&b);
    printf("\n array elements are: ");
    for(i=0;i<b;i++)
    {
         scanf("%d",&a[i]);
    }
     printf("\n The element to be found is: ");
     scanf("%d",&c);
     for(i=0;i<b;i++)
     {
          if(c==a[i])
          {
              s++;
          }
     }
        printf("\n And it repeats:%d times",c,s);
}
