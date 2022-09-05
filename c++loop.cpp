#include<iostream>
int main()
{
	int a,b;
	a=10;
	b=5;
	
	if(a>b)
	{
		std::cout<<"A is greater";
	}
	else if(b>a)
	{
		std::cout<<"B is greater";
	}
	else
	{
		std::cout<<"invalid input";
	}
	return 0;
}

