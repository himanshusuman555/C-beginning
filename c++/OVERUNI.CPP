#include<iostream.h>
#include<conio.h>
class Test
{
 int a;
 public:
 Test()
 {
  a=0;
 }
 void operator++()
 {
  a++;
 }
 void operator--()
 {
  a--;
 }
 void show()
 {
  cout<<"a="<<a<<endl;
 }
};
void main()
{
 Test t;
 t++;
 t--;
 t.show();
 getch();
}


