//Single Level inheritance 2. private derivation
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

class phy: private stu
{
  float h,w;
  public:
  void getphy()
  {
   getstu();
   cout<<"Enter height:";
   cin>>h;
   cout<<"Enter weight:";
   cin>>w;
  }
  void putphy()
  {
   putstu();
   cout<<"Height="<<h<<endl;
   cout<<"weight="<<w<<endl;
  }
};

void main()
{
 phy p;
 clrscr();
 cout<<"_____________________\n";
 p.getphy();
  cout<<"_____________________\n";
 p.putphy();
 getch();
}
