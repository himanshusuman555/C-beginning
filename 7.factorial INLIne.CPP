#include<iostream.h>
#include<conio.h>
inline void factorial(int x)
{
  int i,f=1,p=1;

  for(i=1;i<=x;i++)
  {
    f=f*i;
  }

  cout<<"Factorial of"<<x<<" is: "<< f<<endl;
}

int main()
{
  int i,n;
  cout<<"C++ program to print factoerial of n natural number"<<endl<<endl;
  cout<<"Enter total of natural numbers:"<<endl;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    factorial(i);
  }
 getch();
}
