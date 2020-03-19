#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
 char email[50],pass[40];
 clrscr();
 char l[50]="himanshusuman555@gmail.com";
 char p[20]="spgoogle";

 cout<<"Enter Email:";
 cin>>email;

 cout<<"Enter password:";
 cin>>pass;

 if(strcmp(l,email)==0  && strcmp(pass,p)==0)
 {
  cout<<"Login successful";
 }
 else
 {
  cout<<"wrong logins";
 }
}
