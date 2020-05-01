//before operator overloading // trying using simple function
#include<iostream.h>
#include<conio.h>
class Test
{
 int a;
 public:
 void get()
 {
  cin>>a;
 }
 void compare(Test t2)
 {
  if(a==t2.a)
  cout<<"objects are equal";
  else
  cout<<"objects are not equal";
 }
};

void main()
{
 Test t1,t2;
 clrscr();
 cout<<"Enter t1 object a value";
 t1.get();
 cout<<"Enter t2 object a value";
 t2.get();
 t1.compare(t2);
 getch();
}
