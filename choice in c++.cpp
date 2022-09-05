#include<iostream>;
int main()
{
	int a,b,c,d;
	a=5; b=3;
	std::cout<<"1.addition , 2.substraction";
	std::cout<<"enter your choice";
	std::cin>>c;
	switch(c)
	{
		case 1:
			d=a+b;
			std::cout<<d;
			break;
		
		case 2:
			d=a-b;
		    std::cout<<d;
		    break;
		
		default:
			std::cout<<"invalid input";
			break;
			
	}
	return 0;
}
