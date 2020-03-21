#include<iostream.h>
#include<conio.h>
int main()
{
 int no,b;
 cout<<"Enter any number";
 cin>>no;

 cout<<"Reverse is given below\n";
 while(no!=0)
 {
  b=no%10;
  cout<<b;
  no=no/10;
 }
}