#include<iostream.h>
#include<conio.h>
struct student
{
	 int id;
	 char name[20];
	 void get_data()
	 {
	   cout<<"Enter id ";
	   cin>>id;
	   cout<<"Enter Name ";
	   cin>>name;
	 }
};//obj;

int main()
{
 clrscr();
 struct student obj;
 obj.get_data();
}

