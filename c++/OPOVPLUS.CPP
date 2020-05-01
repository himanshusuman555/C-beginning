#include<iostream.h>
#include<conio.h>
#include<string.h>
class Test
{
 char st[100];
 public:
 void read()
 {
  cout<<"Enter string :";
  cin>>st;
 }
 void show()
 {
  cout<<"string="<<st<<endl;
 }
 Test add(Test t2)
 {
  Test t3;
  strcpy(t3.st,st);
  strcat(t3.st," ");
  strcat(t3.st,t2.st);
  return t3;
 }
};
void main()
{
 Test t1,t2,t3;
 clrscr();
 t1.read();
 t2.read();
 t3=t1.add(t2);
 t3.show();
 getch();
}