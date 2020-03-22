#include<iostream.h>
#include<conio.h>
int main()
{
	int a[100],n,i;
	clrscr();
	cout<<"Enter how many mnumbers you want to insert to store\n";
	cin>>n;

	cout<<"Now enter "<<n<<" elements into the array list\n";
	for(i=0;i<n;i++)
	 {
	  cin>>a[i];
	 }

	cout<<"Array elements is given below\n";
	for(i=0;i<n;i++)
	 {
	  cout<<a[i]<<" ";
	 }

	cout<<"\nnow showing odd numbers from array list\n";
	for(i=0;i<n;i++)
	 {
	  if(a[i]%2==1)
	    {
	     cout<<a[i]<<" ";
	    }
	 }
}


