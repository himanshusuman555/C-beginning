//copying one string into another or reversing the string elements
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s[200],rev[200];
 clrscr();
 printf("Enter any string\n");
 gets(s);

 //copying string of first in second charcter array
 strcpy(rev,s);

 //reverse funcation for string strrev
 strrev(rev);

 if(strcmp(s,rev)==0)
 {
  printf("palindrome");
 }
 else
 {
   printf("not palindrome");
 }
}