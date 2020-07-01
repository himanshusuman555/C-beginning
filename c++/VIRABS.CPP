#include<iostream.h>
#include<conio.h>
class shape
{
 protected:
 float d1,d2;

 public:
 void getdim()
 {
  cin>>d1>>d2;
 }

 virtual float area()=0;
};

class triangle: public shape
{
 public:
 float area()
 {
   return 0.5*d1*d2;
 }
};

class rectangle: public shape
{
 public:
 float area()
 {
  return d1*d2;
 }
};

void main()
{
 triangle t;
 cout<<"Enter triangle base and height\n";
 t.getdim();
 cout<<"Area="<<t.area()<<endl;

 rectangle r;
 cout<<"Enter rectangle lenght ,breath\n";
 r.getdim();
 cout<<"Area="<<r.area()<<endl;
}
