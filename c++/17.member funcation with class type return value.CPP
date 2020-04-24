#include<iostream>
#include<conio.h>
class Test
       {
	int a,b;
	public:
	void getdata();
	void putdata();
	Test sum(Test);
       };

       void Test::getdata()
       {
	cout<<"Enter a b values";
	cin>>a>>b;
       }

       void Test ::putdata()
       {
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
       }

       Test Test::sum(Test t2)
       {
	Test t3;
	t3.a=a+t2.a;
	t3.b=b+t2.b;
	return t3;
       }

void main()
{
 Test t1,t2,t3;
 clrscr();

 t1.getdata();
 t2.getdata();
 t3=t1.sum(t2);

 t1.putdata();
 t2.putdata();

 cout<<"T3 obj data is"<<endl;
 t3.putdata();
 getch();
}
