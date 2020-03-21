#include<iostream.h>
#include<conio.h>
int main()
{
 int no,b,last;
 cout<<"Enter any number\n";
 cin>>no;
 last=no%10;
 while(no!=0)
 {
  b=no%10;
  no=no/10;
 }
 cout<<"last="<<last<<endl;
 cout<<"first="<<b;
}