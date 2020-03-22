#include<iostream.h>
#include<conio.h>
int main()
{
 int b,no,mul=1;
 clrscr();
 cout<<"Enter  number";
 cin>>no;
 do
  {
   b=no%10;
   mul=mul*b;
   no=no/10;
  }while(no!=0);

  cout<<"mul="<<mul;

}
