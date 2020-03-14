/*Inline function is a function which when invoked requests the compiler 
to replace the calling statement with its body. A keyword inline is added 
before the function name to make it inline. It is an optimization technique 
used by the compilers as it saves time in switching between the functions otherwise.

Member functions of a class are inline by default even if the keyword inline is not used.*/


#include<iostream.h>    
#include<conio.h>
inline void print(int x)
{
 cout<<x<<" ";
}

int main()
{
  int i ,n;
  cout<<"C++ program to print first n natural numbers"<<endl<<endl;
  cout<<"Enter total number of natural numbers:"<<endl;
  cin>>n;

  for(i=1;i<=n;i++)
  {
   print(i);
  }

  getch();
  return 0;
}
