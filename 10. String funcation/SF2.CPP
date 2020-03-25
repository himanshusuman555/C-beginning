//Login program using string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char u[200]="himanshusuman555@gmail.com";
 char p[200]="password";
 char u1[200],p1[200];

 printf("Enter username : ");
 gets(u1);
 //scanf("%s",&u1);

 printf("Enter password : ");
 gets(p1);
 //scanf("%s",&p1);


 if(strcmp(u,u1)==0 && strcmp(p,p1)==0)
  {
   printf("login successful");
  }
 else
 {
  printf(" invalid login");
 }
}