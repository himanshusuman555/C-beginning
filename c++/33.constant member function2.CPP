#include<iostream.h>
#include<conio.h>
class Test
{
 int a,b;
 public:
 void read()
 {
  a=10;
  b=20;
 }
 void show() const
 {
  a=30;
  b=40;

  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
 }
};

void main()
{
 Test t;
 clrscr();
 t.read();
 t.show();
 getch();
}
