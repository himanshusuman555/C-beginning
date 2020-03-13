#include<iostream.h>
#include<conio.h>
class rect
{
	public:
	 int height;
	 int width;
	 int area;

	 void get_rect()
	 {
	  height=12;
	  width=18;
	 }

	 void Area()
	 {
	  area=height*width;
	  cout<<"Area of rect="<<area;
	 }
};
int main()
{
 rect obj;
 clrscr();
 obj.get_rect();
 obj.Area();
}
