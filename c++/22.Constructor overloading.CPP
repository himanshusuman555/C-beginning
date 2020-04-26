#include<iostream.h>
#include<conio.h>
class circle
{
 float r;
 public:
 circle()               // default const no arguments
 {
  r=5;
 }
 circle(float r)        //parameterized construtor
 {
  this->r=r; //(*this).r=r;
 }
 void showarea()
 {
  cout<<"Area="<<3.14*r*r<<endl;
 }
};

void main()
{
 clrscr();
 circle c1;   //default const ,cause no argument passed
 circle c2(10);  //parameterrized const with argument passing

 c1.showarea();
 c2.showarea();
 getch();
}

