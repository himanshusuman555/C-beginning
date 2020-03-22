/*
A
AB
ABC
ABCD
ABCDE
*/

#include<iostream.h>
#include<conio.h>
int main()
{
 char i,j;
 for(i='A';i<='E';i++)
 {
  for(j='A';j<=i;j++)
   {
    cout<<j;
   }
  cout<<"\n";
 }
}
