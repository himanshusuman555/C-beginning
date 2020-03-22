#include<iostream.h>
#include<conio.h>
int main()
{
 int b,no,last,first;
 clrscr();
 cout<<"Enter  number";
 cin>>no;
 last=no%10;
 do
  {
   b=no%10;
   no=no/10;
  }while(no!=0);

  cout<<"last="<<last<<endl;
  cout<<"first="<<b;

}
