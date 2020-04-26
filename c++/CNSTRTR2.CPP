#include<iostream.h>
#include<conio.h>
class test
  {
   int a,b;
   public:
   void get(); //when we looked inside this class there is no constructor
	       // when complier compiles this immedietly creates constructor insode
	       // the class defined constructor  even when no constructor is defined
  };
void main()
{
 clrscr();
 test t;
}