#include<iostream.h>
#include<conio.h>
class stu
{
 private:
 int id;
 char name[20];
 float fee;

 public:
 void get();
};

void stu:: get()
{
  cout<<"Enter id ,name ,fee\n";
  cin>>id>>name>>fee;
  cout<<"\nid="<<id<<endl;
  cout<<"name="<<name<<endl;
  cout<<"fee="<<fee;
 }
void main()
{
 stu obj;
 clrscr();
 obj.get();
 getch();
}
