#include<iostream.h>
#include<conio.h>
class Test
{
 public:
 static void big(int a,int b)
 {
  cout<<"\n";
  if(a>b)
  cout<<"a is big";
  else if(b>a)
  cout<<"b is greator";
  else
  cout<<"both are equAL";
 }
};
void main()
{
 clrscr();
 Test t;
 t.big(5,10);
 Test::big(9,1);
 getch();
}

