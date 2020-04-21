#include<iostream.h>
#include<conio.h>
void main()
{
  int a=100 , &b=a; //now b is alias name for a //indireclty both are same
  clrscr();
  a=200;

  cout<<a<<b<<endl;

  b=300;

  cout<<a<<b<<endl;
  getch();
}
