#include<stdio.h>
#include<iostream.h>
#include<conio.h>
int sum(int x,int y=0,int z=0);
void main()
{
 clrscr();
 cout<<"Sum="<<sum(10,20,30)<<endl;
 cout<<"Sum="<<sum(10,20)<<endl;
 cout<<"Sum="<<sum(10)<<endl;
 //cout<<"Sum="<<sum()<<endl;
}
int sum(int x,int y,int z)
{
 return x+y+z;
}
