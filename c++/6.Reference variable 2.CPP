#include<iostream.h>
#include<conio.h>
void main()
{
  int a=100;
  int &b=a;
  int &c=b;
  clrscr();

  cout<<a<<ends<<b<<ends<<c<<endl;

  c=200;
  cout<<a<<b<<c;
  getch();
}
