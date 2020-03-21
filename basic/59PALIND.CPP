#include<iostream.h>
#include<conio.h>
int main()
{
 int b,no,rev=0,copy;
 clrscr();
 cout<<"Enter  number";
 cin>>no;
 copy=no;
 do
  {
   b=no%10;
   rev=rev*10+b;
   no=no/10;
  }while(no!=0);


 if(copy==rev)
  cout<<"palindrome";
 else
  cout<<"not palindrome";
}
