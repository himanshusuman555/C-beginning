#include<iostream.h>
#include<conio.h>
class si
{
 float p;
 int t;
 float const r;
 public:

 si():r(2.5)
 {
 }

 void read(float pa,int ti)
 {
  p=pa;
  t=ti;
 }
 float show()
 {
  return(p*r*t)/100;
 }
};
void main()
{
 si s;
 s.read(100,10);
 cout<<"interst="<<s.show();
 getch();
}
