#include<iostream.h>
#include<conio.h>
class Test2;
class Test1
   {
    int a;
    public:
    void geta()
    {
     cout<<"ENter a:";
     cin>>a;
    }
    friend void big(Test1,Test2);
   };

class Test2
 {
  int b;
  public:
  void getb()
  {
   cout<<"Enter b:";
   cin>>b;
  }
  friend void big(Test1,Test2);
 };

void big(Test1 t1,Test2 t2)
{
 if(t1.a>t2.b)
 {
  cout<<"a is greator";
 }
 else if(t2.b>t1.a)
 {
  cout<<"b is greator";
 }
 else
 {
  cout<<"both are equal";
 }
}


void main()
{
 clrscr();
 Test1 t1;
 Test2 t2;
 t1.geta();
 t2.getb();
 big(t1,t2);
 getch();
}