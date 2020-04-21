#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct stu
{
 int id;
 char name[10];

 void get()
 {
  cout<<"Enter student id ,name\n";
  cin>>id>>name;

  cout<<"\nId="<<id<<endl;
  cout<<"Name="<<name<<endl;
 }
};

void main()
{
 stu s;
 s.get();
 getch();
}
