#include<iostream.h>
#include<conio.h>
class simple
{
  int id;
  char name[10];
  public:
  void getinfo();
  void putinfo();
};
void simple::getinfo()
{
 cout<<"Enter the id,name : "<<endl;
 cin>>id>>name;
}

void simple::putinfo()
{
 cout<<"Id="<<id<<ends<<"Name="<<name<<endl;
}

void main()
{
 simple s[5];
 clrscr();
 cout<<"Enter 5 student details"<<endl;
 for(int i=0;i<5;i++)
 {
  s[i].getinfo();
 }
 cout<<"Student details\n"<<endl;
 cout<<"******************"<<endl;
 for(i=0;i<5;i++)
 {
  s[i].putinfo();
 }
 getch();
}
