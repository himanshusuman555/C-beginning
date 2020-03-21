#include<iostream.h>
#include<conio.h>
int main()
{
 int no,b,mul=1;
 cout<<"Enter any number\n";
 cin>>no;
 while(no!=0)
 {
  b=no%10;
  mul=mul*b;
  no=no/10;
 }
 cout<<"mul="<<mul;
}