#include<iostream.h>
#include<conio.h>
class sample
{
 private:
 int a;
 public:
 void geta()
 {
  cout<<"Enter a's value:";
  cin>>a;
 }
 void puta()
 {
  cout<<"a's value ="<<a<<endl;
 }

 void bigger(sample s2)
 {
  if(a>s2.a)
  cout<<"s1.a is greator ";
  else
  cout<<"s2.a is greator";
 }
};

void main()
{
 sample s1,s2;
 clrscr();

 s1.geta();
 s2.geta();

 s1.puta();
 s2.puta();
 s1.bigger(s2);
}
