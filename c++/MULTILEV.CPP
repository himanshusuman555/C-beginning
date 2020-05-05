#include<iostream.h>
#include<conio.h>
class stu
{
 int id;
 char name[20];

 public:
 void getstu()
 {
  cout<<"Enter id ,name : \n";
  cin>>id>>name;
 }
 void putstu()
 {
  cout<<"Id="<<id<<endl;
  cout<<"Name="<<name<<endl;
 }
};

class marks : public stu
{
 protected:
 int m1,m2,m3;
 public:
 void getmarks()
  {
   cout<<"Enter 3 subject marks \n";
   cin>>m1>>m2>>m3;
  }
 void putmarks()
 {
  cout<<"sub 1="<<m1<<endl;
  cout<<"sub 2="<<m2<<endl;
  cout<<"sub 3="<<m3<<endl;
 }
};
class result:public marks
{
 int tot;
 float avg;
 float per;

 public:
 void show()
 {
  tot=m1+m2+m3;
  avg=tot/3.0;
  per=(tot/3.0)*100.0;
  cout<<"Total marks="<<tot<<endl;
  cout<<"Average mark="<<avg<<endl;
  cout<<"percentage="<<per;
 }
};

void main()
{
 result obj;
 clrscr();
 cout<<"------------------\n";
 obj.getstu();
 obj.getmarks();
 cout<<"-------------------\n";
 obj.putstu();
 obj.putmarks();
 obj.show();
 getch();
}





