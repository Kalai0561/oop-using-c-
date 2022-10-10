#include<iostream>
#include<math.h>
using namespace std;
class square
{
	public:
		int a;
		void input(int a)
		{
			int area()
			{
				sq=a*a;
				return 0;
			}
		}
		
};
class rectangle
{
	public:
		int l,b
		void input(int l,int b)
		{
			int area(){
				rec=l*b;
				return 0;
			}
			
		}
};
int main()
{
	square;
	rectangle;
	cout<<"enter the length of the rectangle :";
	cin>>l;
	cout<<"enter the breath of the rectangle : ";
	cin>>b;
	cout<<"enter the side value of square : ";
	cin>>a;
	rectangle.input(l,b);
	square.input(a);
	cout<<"the area of the rectangle is "<<rectangle.area2()<<endl;
	cout<"the area of the square is  : "<<square.area1()<<endl;
	return 0;
}





