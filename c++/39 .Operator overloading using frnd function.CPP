#include<iostream.h>
#include<conio.h>
class Test2;
class Test1
{
 int a;
 public:
 void geta()
 {
  cout<<"Enter a :";
  cin>>a;
 }
 friend void operator>(Test1,Test2);
};

class Test2
{
 int b;
 public:
 void getb()
 {
  cout<<"Enter b :";
  cin>>b;
 }
 friend void operator>(Test1,Test2);
};

void operator>(Test1 t1,Test2 t2)
{
 /* if(t1.a>t2.b)
 cout<<"T1.a is greator";
 else
 cout<<"T2.a ia greator";
}  */

 t1.a > t2.b ? cout<<"t1.a is greator" : cout<<"t2.a is greator";
 }
void main()
{
 clrscr();
 Test1 t1;
 Test2 t2;
 t1.geta();
 t2.getb();
 t1>t2;
 getch();
}