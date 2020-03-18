#include<iostream.h>
#include<conio.h>
int main()
{
 float math,physics,chemistry,hindi,english,avg;
 clrscr();
 cout<<"Enter math marks:";
 cin>>math;
 cout<<"Enter physics marks:";
 cin>>physics;
 cout<<"Enter chemistry marks:";
 cin>>chemistry;
 cout<<"Enter hindi marks:";
 cin>>hindi;
 cout<<"Enter english marks:";
 cin>>english;

 avg=(math+physics+chemistry+hindi+english)/5;
 cout<<"Average marks="<<avg;
}
