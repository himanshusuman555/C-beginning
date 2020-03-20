#include<iostream.h>
int main()
{
 int c=0,b=1,a,n,i;
 cout<<"ENter limit";
 cin>>n;
  for(i=0;i<=n;i++)
  {
   cout<<c<<" ";
   a=b;
   b=c;
   c=a+b;
  }
}