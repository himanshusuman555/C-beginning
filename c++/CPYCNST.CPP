#include<iostream.h>
#include<conio.h>
class sample
      {
       int a,b;
       public:

	sample(int a,int b)
	{
	 this->a=a;
	 (*this).b=b;
	}

	sample(sample &old)      //passing refernce of sample class type
	{             //class type object we r passing sample s1 object
	 a=old.a;
	 b=old.b;
	}

      void print()
      {
       cout<<"a="<<a<<endl;
       cout<<"b="<<b<<endl;
      }
   };
void main()
{
 clrscr();
 sample s1(10,20);
 sample s2(s1);
 s1.print();
 s2.print();
 getch();
}

