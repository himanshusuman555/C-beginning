//palindrome
#include<iostream.h>
#include<conio.h>
int main()
{
 int no,b,rev=0,cpy;
 cout<<"Enter any number\n";
 cin>>no;

 cpy=no;
 while(no!=0)
 {
  b=no%10;
  rev=rev*10+b;
  no=no/10;
 }
 if(rev==cpy)
  cout<<"palindrome";
  else
  cout<<"not plaindome";
}
