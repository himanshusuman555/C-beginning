#include<iostream.h>
#include<conio.h>
class sample
	{
	 int a,b;
	 public:
	 void geta()
	 {
	   cout<<"Enter a=";
	   cin>>a;
	 }
	 void getb()
	 {
	  cout<<"Enter b=";
	  cin>>b;
	 }

	 void sum(sample s2)
	 {
	   int c=a+s2.b;
	  cout<<"sum="<<c;
	 }

	};
      void main()
      {
       sample s1,s2;
       clrscr();
       s1.geta();
       s2.getb();
       s1.sum(s2);
      }
