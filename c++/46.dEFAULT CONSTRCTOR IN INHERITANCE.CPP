#include<iostream.h>
#include<conio.h>
class base
{
 public:
 base()
 {
  cout<<"base class constructor\n";
 }
};

class der:public base
{
 public:
 der()
 {
  //base:: base(); base class implicitly bind with derieved class instructor
  cout<<"derieved class constructor\n";
 }
};
void main()
{
 clrscr();
 der d;
 getch();
}

