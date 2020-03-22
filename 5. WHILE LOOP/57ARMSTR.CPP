//armstrong number sum of powers of entered number equals to the number
#include<iostream.h>
#include<conio.h>
int main()
{
 int no,b,sum=0,copy;
 cout<<"Enter any number\n";
 cin>>no;
 copy=no;
 while(no!=0)
 {
  b=no%10;
  sum=sum+(b*b*b);
  no=no/10;
 }

 if(copy==sum)
  cout<<"armstrong number";
 else
  cout<<"not a armstrong number";
}
