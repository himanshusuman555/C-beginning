#include<iostream.h>
#include<conio.h>
class emp
	{
	 private:
	 int id;
	 char name[20];
	 float sal;

	 void getemp()
	 {
	  cout<<"Enter empid,name,salary";
	  cin>>id>>name>>sal;
	 }
	 public:
	 void putemp()
	 {
	  getemp();
	  cout<<id<<ends<<name<<ends<<sal<<endl;
	 }
	};
    void main()
    {
     clrscr();
     emp t;
     t.putemp();
    }