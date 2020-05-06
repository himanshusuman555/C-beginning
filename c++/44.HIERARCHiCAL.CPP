#include<iostream.h>
#include<conio.h>
#include<string.h>
class Acc    //base class
{
 long signed int acno;
 char name[20];

 public:
 void getacc()
 {
  cout<<"Enter ac no,name\n";
  cin>>acno>>name;
 }

 void putacc()
 {
  cout<<"Acc no="<<acno<<endl;
  cout<<"Name="<<name<<endl;
 }
};

class saving:public Acc
{
 float bal;
 public:
 void getbal()
 {
  cout<<"Enter balance";
  cin>>bal;

  if(bal<500)
  cout<<"Min balance 500 required\n";

  else
  cout<<"Account created \n";
 }
};
class current:public Acc
{
 float bal;
 public:
 void getbal()
 {
  cout<<"Enter balance:\n";
  cin>>bal;

  if(bal<1000)
  cout<<"Minimum balance 1000 required";

  else
  cout<<"Account created\n";
 }
};
void main()
{
 int op;
 clrscr();
 cout<<"Enter type of account you wanted to create :\n";
 cout<<"1.Savings Acc\n";
 cout<<"2.Current Acc\n";
 cin>>op;

 if(op==1)
 {
  saving s;
  cout<<"\n------------------------\n";
  s.getacc();
  cout<<"\n------------------------\n";
  s.putacc();
  cout<<"\n------------------------\n";
  s.getbal();
 }

 if(op==2)
 {
  current c;
  cout<<"\n------------------------\n";
  c.getacc();
  cout<<"\n------------------------\n";
  c.putacc();
  cout<<"\n------------------------\n";
  c.getbal();
 }
 getch();
}


