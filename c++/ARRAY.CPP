#include<iostream.h>
#include<conio.h>
class stu
{
 int id,sub[6];
 char name[20];
 public:
 void getstu();
 void result();
};

void stu::getstu()
{
 cout<<"Enter stu,id,name"<<endl;
 cin>>id>>name;
 cout<<"Enter 6 sub marks";
 for(int i=0;i<6;i++)
 {
  cin>>sub[i];
 }
}

void stu::result()
{
 int tot=0;
 float avg;
 for(int i=0;i<6;i++)
 {
  tot=tot+sub[i];
 }
 avg=tot/6;
 cout<<"Total ="<<tot<<endl;
 cout<<"Avg = "<<avg<<endl;
 cout<<"Result=";
 for(i=0;i<6;i++)
 if(sub[i] < 35)
   {
    cout<<"Fail";
    goto last;
   }
  cout<<"pass";
  last:
}

void main()
{
 clrscr();
 stu obj;
 obj.getstu();
 obj.result();

 getch();
}
