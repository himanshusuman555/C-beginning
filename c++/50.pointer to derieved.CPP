#include<iostream.h>
#include<conio.h>
class base
{
 public:
 int x;
 void display()
 {
  cout<<"value of x="<<x<<endl;
 }
};

class derived:public base
{
 public:
 int y;
 void display()
 {
  cout<<"value of x="<<x<<endl;
  cout<<"value of y="<<y<<endl;
 }
};

void main()
{
 clrscr();
 base *ptr;
 base obj;
 ptr= &obj;
 cout<<"base class values:\n";
 ptr->x=10;
 ptr->display();

 derived *ptr2;
 derived obj2;
 ptr2=&obj2;
 cout<<"derived class values\n";
 ptr2->x=20;
 ptr2->y=30;
 ptr2->display();
}
