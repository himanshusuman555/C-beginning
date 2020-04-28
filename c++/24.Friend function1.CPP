#include<iostream.h>
#include<conio.h>
class sample
{
 int a,b;
 friend void print(sample);   //object should be class type in friend function
};

void print(sample s)         //giving class type object
{                           //  so class memebers can be accessed
 s.a=10;
 s.b=20;

 cout<<"a="<<s.a<<endl;
 cout<<"b="<<s.b<<endl;
}
void main()
{
 clrscr();
 sample s;       //this object s is all need everywhere when single class
 print(s);       //caling print without object cause print is non member frnd
 getch();        //function and s is passed cause s will allow access s variables
}

