#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct stu
{
 int id;
 char name[10];

 void get()
 {
  cout<<"Enter student id ,name";
  cin>>id>>name;

  cout<<"Id="<<id<<endl;
  cout<<"Name="<<name<<endl;
 }
}s;

void main()
{
 s.get();
 getch();
}
