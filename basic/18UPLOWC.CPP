#include<iostream.h>
#include<conio.h>
int main()
{
 char a;
 cout<<"Enter an alphabet";
 cin>>a;

 if(a>=65 && a<=90)
  {
   cout<<"given alphabet is uppercase";
  }
 if(a>=97 && a<=121)
 {
  cout<<"given alphabet is in lowercase";
 }
}