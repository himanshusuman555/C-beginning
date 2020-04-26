// constructor
#include<iostream.h>
#include<conio.h>
class  Test
     {
      int a,b;
      public:
      Test()
      {
       a=10;
       b=20;
      }
      void values()
      {
       cout<<"a="<<a<<endl;
       cout<<"b="<<b<<endl;
      }
     };

void main()
{
 Test t;
 clrscr();
 t.values();

}