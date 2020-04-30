#include<iostream.h>
#include<conio.h>
class sample
{
 static int count;
 public:
 sample()
 {
  count++;
  cout<<count<<"  object created\n";
 }
 ~sample()
 {
  cout<<count<<" object deleted\n";
  count--;
 }
};
int sample::count;
void main()
{
 clrscr();
 sample s1,s2,s3;
}
