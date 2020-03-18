#include<iostream.h>
#include<conio.h>
int main()
{
 float principle,rate,time,si;
 clrscr();
 cout<<"Enter principle:";
 cin>>principle;
 cout<<"ENter rate of interest:";
 cin>>rate;
 cout<<"Enter Time";
 cin>>time;
 si=(principle*rate*time)/100;
 cout<<"Simple interest="<<si;
}
