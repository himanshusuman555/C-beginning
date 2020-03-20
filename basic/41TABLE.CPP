#include<iostream.h>
#include<conio.h>
int main()
{
 int n,i;
 clrscr();
 cout<<"Enter no to find its table: ";
 cin>>i;
 for(n=1;n<=10;n++)
 {
  cout<<i<<"*"<<n<<"="<<i*n<<"\n";
 }
getch();
}