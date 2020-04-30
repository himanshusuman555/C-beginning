#include<iostream.h>
#include<conio.h>
class sample
{
 static int a,b;
 public:
 static void get()
 {
  cout<<"Enter two integers";
  cin>>a>>b;
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
 }
};
 int sample::a;
 int sample::b;

void main()
{
 sample s;
 s.get();
 sample::get();
 getch();
}
