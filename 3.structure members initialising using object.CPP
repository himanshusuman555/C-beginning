#include<iostream.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
};

int main()
{
 struct student obj;
 clrscr();

 //now assigning values in data memebers via object
 strcpy(obj.name,"Himanshu suman");
 obj.rollno=205;
 obj.marks=85.4;

 /* with the help of objects only we can access the members variables
 of class or structure */
 cout<<"Name="<<obj.name<<endl;
 cout<<"Rollno="<<obj.rollno<<endl;
 cout<<"MArks="<<obj.marks<<endl;
}

/* Note : structure is same like a class just the differnce is structure has
by default public access to its memebers while class gives three different access
specifiers i.e public / private / protected.*/
