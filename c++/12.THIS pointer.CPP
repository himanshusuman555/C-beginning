//pointer to memeber access operation
#include<iostream.h>
#include<conio.h>
class test
	{
	 int a,b;
	 public:
	 void show()
	 {
	  a=10;
	  b=20;
	  cout<<"Obj addrr = "<<this<<endl;//this is giving address of test t object in hexdecimal form
	  cout<<"a="<<this->a<<endl;   //accessing member variable using this pointer
	  cout<<"b="<<this->b<<endl;   //current object b that means data memeber.
	 }
	};

  void main()
  {
   test t;
   clrscr();
   t.show();
   getch();
  }

