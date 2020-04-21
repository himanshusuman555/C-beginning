/* call by reference using pointers  vs refernce variables

#include<iostream.h>
#include<conio.h>
void swap(int *b,int *c)
{
 int temp=*b;
       *b=*c;
       *c=temp;
}

void main()
{
 int a=10,b=20;
 clrscr();
 swap(&a,&b);
 cout<<"a="<<a<<ends<<"b="<<b;
 getch();
}
*/

#include<iostream.h>
#include<conio.h>
void swap(int &d,int &e)
 {
  int temp=d;
	 d=e;
	 e=temp;
 }

void main()
{
 int a=10,b=20;
 clrscr();
 swap(a,b);
 cout<<"a="<<a<<ends<<"b="<<b;
}



