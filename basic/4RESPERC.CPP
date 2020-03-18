#include<iostream.h>
#include<conio.h>
int main()
{
 float per;
 cout<<"Enter result in percent:";
 cin>>per;
 if(per>60 && per<=100)
 {
  cout<<" 1 st division";
 }

 if(per>45 && per<60)
 {
  cout<<" 2nd division";
 }

 if(per>33 && per<45)
 {
  cout<<" 3 rd division";
 }

 if(per<33 && per>0)
 {
  cout<<" fail";
 }
}