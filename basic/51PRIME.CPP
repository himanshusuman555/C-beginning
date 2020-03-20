#include<iostream.h>
#include<conio.h>
int main()
{
 int i,num,m=0;
 cout<<"Enter a number";
 cin>>num;

 for(i=2;i<=num/2;i++)
 {
  if(num%i==0)
  {
   cout<<"not prime";
   m=1;
   break;
  }
 }
 if(m==0)
 {
  cout<<"Number is prime";
 }
}