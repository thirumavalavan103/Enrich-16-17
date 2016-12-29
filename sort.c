#include<stdio.h>
int main()
{
 int a[10];
 int i,j,n,t;
 printf("enter size of array: ");
 scanf("%d",&n);
 printf("enter elements in an array");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\nsorted digits are: ");
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[j]<a[i])
   {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
   }
  }
  printf("%d\t",a[i]);
 }
return 0;
}
