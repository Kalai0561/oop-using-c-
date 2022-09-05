#include<iostream>
int main()
{
	int a,b,c,d;
	a=5;
	b=6;
	c=7;
	d=8;
	
	if(a>b )
	{
		std::cout<<"A is greater";
	}
	else if(b<c)
	{
		std::cout<<"B is greater";
	}
	else if(c>d)
	{
		std::cout<<"c is greater";
	}
	else if(d>a)
	{
		std::cout<<"d is greater";
	}
	return 0;
}
