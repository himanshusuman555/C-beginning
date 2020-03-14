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