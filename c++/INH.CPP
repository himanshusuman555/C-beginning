//Single Level inheritance 1. public derivation
#include<iostream.h>
#include<conio.h>
class stu
{
  int id;
  char name[20];
  public:
  void getstu()
  {
   cout<<"ENter id ,name :";
   cin>>id>>name;
  }
  void putstu()
  {
   cout<<"Id="<<id<<endl;
   cout<<"Name="<<name<<endl;
  }
};

class phy: public stu
{
  float h,w;
  public:
  void getphy()
  {
   cout<<"Enter height:";
   cin>>h;
   cout<<"Enter weight:";
   cin>>w;
  }
  void putphy()
  {
   cout<<"Height="<<h<<endl;
   cout<<"weight="<<w<<endl;
  }
};

void main()
{
 phy p;
 clrscr();
 p.getstu();
 p.getphy();
 cout<<"_____________________\n";
 p.putstu();
 p.putphy();
 getch();
}
