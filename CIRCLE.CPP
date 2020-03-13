#include<iostream.h>
#include<conio.h>
class circle
{
	 private:
	 float radius;
	 float area;

	 public:

	 void getradius()
	 {
	  cout<<"Enter radius";
	  cin>>radius;
	 }

	 void Area()
	 {
	  area=(3.14*radius*radius);
	  cout<<"Area of rectangle="<<area;
	 }
};
int main()
{
 circle obj;
 clrscr();
 obj.getradius();
 obj.Area();
 return 0;
}


