#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter the value of 1st number : ";
	cin>>a;
    cout<<"enter the value of 2nd number : ";
	cin>>b;
	cout<<"enter the value of 3rd number : ";
	cin>>c;
	cout<<"enter the value of 4th number : ";
	cin>>d;
	
	if(a>b)
	{
		cout<<a<<" is greater";
	}
	else if(b>c)
	{
		cout<<b<<" is greater";
	}
	else if(c>d)
	{
		cout<<c<< " is greater";
	}
	else if(d>a)
	{
		cout<<d<<" is greater";
	}
	else
	{
		cout<<"invalid input";
	}
	
	return 0;
}
