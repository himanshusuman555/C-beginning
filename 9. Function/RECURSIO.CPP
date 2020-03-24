//recursion function
#include<stdio.h>
#include<conio.h>
int table(int no)
{
 if(no!=11)
 {
   printf("%d\n",no);
   no++;
   table(no);
 }
}

void main()
{
 clrscr();
 table(1);
}
