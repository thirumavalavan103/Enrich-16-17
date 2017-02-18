# Enrich-16-17
#include <iostream>
using namespace std;
float si(int,int,float),i=0;
main()
{
 float r;
 int p,n;
 cin>>p>>n>>r;
 i=si(p,n,r);
 cout<<i;
 return 0;
}
float si(int p,int n,float r)
{
    i=(p*n*r)/1200;
    return i;
}
