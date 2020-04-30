#include<iostream.h>
#include<conio.h>
class Test
{
 public:
 static int a;
 void get()
 {
  cout<<"a="<<a;
 }
};
int Test::a; //int Test ::a=100;
void main()
{
 clrscr();
 Test :: a=100;// Test ::a;
 cout<<"a="<<Test::a<<endl;
 Test t1;
 t1.get();
 getch();
}
