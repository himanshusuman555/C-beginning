#include<iostream.h>
#include<conio.h>
int main()
{
 int b,no,sum=0;
 clrscr();
 cout<<"Enter  number";
 cin>>no;
 do
  {
   b=no%10;
   sum=sum+b;
   no=no/10;
  }while(no!=0);

  cout<<"sum="<<sum;;

}
