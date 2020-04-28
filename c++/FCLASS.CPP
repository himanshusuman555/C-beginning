#include<iostream.h>
#include<conio.h>
class TestA
{
 int a,b;
 public:
 friend class TestB;
 void getab()
 {
  cout<<"Enter a,b: ";
  cin>>a>>b;
 }
};

class TestB
{
 public:
 void putab(TestA t1)
 {
  cout<<"a="<<t1.a<<endl;
  cout<<"b="<<t1.b<<endl;
 }
};
void main()
{
 clrscr();
 TestA t1;
 TestB t2;
 t1.getab();
 t2.putab(t1);
 getch();
}
