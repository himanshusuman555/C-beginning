#include<iostream.h>
#include<conio.h>
class stu
{
 int idno;
 char name[20];
 public:

 void getstu()
 {
  cout<<"Enter id ,name:\n";
  cin>>idno>>name;
 }
};

class marks:public stu
{
 protected:
 int m,p,c;
 public:
 void getmarks()
 {
  cout<<"Enter the marks for 3 subjects";
  cin>>m>>p>>c;
 }
};

class sports
{
 protected:
 int spmarks;
 public:
 void getsports()
 {
  cout<<"Enter sports marks";
  cin>>spmarks;
 }
};
class result:public marks,public sports
{
 int tot;
 float avg;
 public:
 void show()
 {
  tot=m+p+c;
  avg=tot/3.0;
  cout<<"Tot="<<tot<<endl;
  cout<<"Avg="<<avg<<endl;
  cout<<"Avg + sprots marks="<<avg + spmarks;
 }
};

void main()
{
 clrscr();
 result r;
 r.getstu();
 r.getmarks();
 r.getsports();
 r.show();
 getch();
}


