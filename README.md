#include<stdio.h>
int main()
{
 int n,r,a=0,b;
 printf("enter an number: ");
 scanf("%d",&n);
 while(n!=0)
 {
  r=n%10;
  a=a*10+r;
  n/=10;
 }
 if(b==a)
 {
  printf("%d is a palindrome",b);
 }
 else
 {
  printf("%d is not aq palindrome",b);
 }
 return 0;
}
