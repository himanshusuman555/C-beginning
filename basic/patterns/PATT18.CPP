/*

AAAAA
bbbb
ccc
dd
e

*/

#include<iostream.h>
#include<conio.h>
int main()
{
 char i,j;
 clrscr();
 for(i=0;i<=4;i++)
 {
  for(j=4;j>=i;j--)
   {
    cout<<(char)(i+65);
   }
  cout<<"\n";
 }
}