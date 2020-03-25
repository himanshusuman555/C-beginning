//string length
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
 clrscr();
 char s[200]="Easy",s2[200]="Hai",s3[200]="A",s4[200]="a";
 //printf("Enter any string\n");
 //gets(s);
 //strlen(s);
 printf("%d",strlen(s));
 printf("\n%s",strcat(s,s2));
 printf("\n%s",strlwr(s2));
 printf("\n%s",strupr(s));
 printf("\n%d",strcmpi(s3,s4));
}