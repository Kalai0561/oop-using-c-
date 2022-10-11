#include<iostream>
using namespace std;
int area(int x)
{
	return x*x;
}
int area(int l,int b)
{
	return l*b;
}
float area(float h,float b1)
{
	return 1/2*h*b1;
}
double area(double r)
{
	return 3.14*r*r;
}
int main()
{
	int x,l,b;
	float h,b1;
	double r;
	cout<<"enter the length of the square : ";
	cin>>x;
	cout<<"enter the length of the rectangle  : ";
	cin>>l;
	cout<<"enter the breath of the rectangle  : ";
	cin>>b;
	cout<<"enter the height of the triangle : ";
	cin>>h;
	cout<<"enter the breath  of the triangle : ";
	cin>>b1;
	cout<<"enter the radius of the circle : ";
	cin>>r;
	cout<<endl<<"the area of square is : "<<area(x)<<endl;
	cout<<endl<<"the area of rectangle is : "<<area(l,b)<<endl;
	cout<<endl<<"the area of triangle is : "<<area(h,b1)<<endl;
	cout<<endl<<"the area of circle is : "<<area(r)<<endl;
}
