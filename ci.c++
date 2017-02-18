# Enrich-16-17
#include <iostream>
using namespace std;
float si(int,int,float),i=0;
float ci(int,int,float),a=0;
main()
{
 float r;
 int p,n;
 cin>>p>>n>>r;
 i=si(p,n,r);
 a=ci(p,n,r);
 cout<<i;
 cout<<a;
 return 0;
}
float si(int p,int n,float r)
{
    i=(p*n*r)/100;
    return i;
}
float ci(int p,int n,float r)
{
    a=p*(1+((n*r)/100));
    return a;
}
