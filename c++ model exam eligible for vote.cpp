#include<iostream>
using namespace std;
int main()
{
	int age,n;
	cout<<"enter the age of the person : ";
	cin>>age;
	if(age>=18)
	{
		cout<<"you are eligible for vote ";
	}
	else if(age<18)
	{
		cout<<"sorry!! ,you are no eligible for vote ";
		n=18-age;
		cout<<"\n you can vote after "<<n<<" years";	
	}
	else{
		cout<<"invalid input";
	} 
}
