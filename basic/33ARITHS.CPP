#include<iostream.h>
#include<conio.h>
int main()
{
 float a,b;
 char c;
 cout<<"Enter two numbers";
 cin>>a>>b;
 cout<<"Enter + - * /";
 cin>>c;

 switch(c)
 {

 case '+': cout<<a<<"+"<<b<<"="<<a+b; break;
 case '-': cout<<a<<"-"<<b<<"="<<a-b; break;
 case '*': cout<<a<<"*"<<b<<"="<<a*b; break;
 case '/': cout<<a<<"/"<<b<<"="<<a/b; break;
 default: cout<<" invalid input";
 }
}