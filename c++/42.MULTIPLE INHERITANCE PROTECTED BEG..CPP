#include<iostream.h>
#include<conio.h>
class stu
{
 int id;
 char name[20];
 public:

 void getstu()
 {
  cout<<"Enter stu id,name";
  cin>>id>>name;
 }

 void putstu()
 {
  cout<<"Id="<<id<<endl;
  cout<<"Name="<<name<<endl;
 }
};

class marks
{
 protected:
 int m1,m2,m3;
 public:
 void getmarks()
 {
  cout<<"Enter marks of 3 subjects";
  cin>>m1>>m2>>m3;
 }
 void putmarks()
 {
  cout<<"marks1="<<m1<<endl;
  cout<<"marks2="<<m2<<endl;
  cout<<"marks3="<<m3<<endl;
 }
};
class result:public stu,public marks
{
 int tot;
 float avg;
 public:
 void total()
 {
  tot=m1+m2+m3;
  cout<<"Total marks="<<tot<<endl;
 }
 void avrg()
 {
  avg=tot/3.0;
  cout<<"Average marks="<<avg<<endl;
 }
};

void main()
{
 result r;
 clrscr();
 cout<<"_______________________\n";
 r.getstu();
 r.getmarks();
 cout<<"_______________________\n";
 r.putstu();
 r.putmarks();
 r.total();
 r.avrg();
 cout<<"_______________________";
 getch();
}
