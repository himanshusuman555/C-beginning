#include<iostream.h>
#include<conio.h>
class test
	{
	 int a,b;
	 public:
	 void show(int a,int b)
	 {
	  a=a;           //value simply passed back to the same local variables or arguments
	  b=b;          //not transferred to the data memebers

	  cout<<"a="<<a<<endl;  //printing local varibales value
	  cout<<"b="<<b<<endl;

	  cout<<"Obj addrr = "<<this<<endl;//this is giving address of test t object in hexdecimal form
	  cout<<"a="<<this->a<<endl;   //accessing member variable using this pointer
	  cout<<"b="<<this->b<<endl;   //current object b that means data memeber.
	 }
	};

  void main()
  {
   test t;
   clrscr();
   t.show(10,20);
   getch();
  }

