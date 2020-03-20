#include<iostream.h>
#include<conio.h>
int main()
{
 int i,f;
 cout<<"Enter a number";
 cin>>f;
 for(i=f-1;i>=1;i--)
 {
  cout<<i;
  f=f*i;
 }
  cout<<"\t"<<f<<"\t";
}
