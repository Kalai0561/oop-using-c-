#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"1.add,2.sub,3.mul,4.div,5.mod"<<endl;
	cout<<"Enter your above choice : ";
	cin>>c;
	cout<<"enter the value of a : ";
	cin>>a;
	cout<<"entert the value of b : ";
	cin>>b;
	
	switch(c)
	{
		case 1:
			d=a+b;
			cout<<d;
			break;
		
		case 2:
			d=a-b;
			cout<<d;
			break;
			
		case 3:
			d=a*b;
			cout<<d;
			break;
			
		case 4:
			d=a/b;
			cout<<d;
			break;
			
		case 5:
			d=a%b;
			cout<<d;
			break;
			
		default:
			cout<<"invalid input";
			break;
			
	}
	return 0;
}
