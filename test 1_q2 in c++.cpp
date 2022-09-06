#include<iostream>
using namespace std;
int main()
{
	int n,i,k;
	cout<<"enter the positive number for multiplication : ";
	cin>>n;
	cout<<"enter the positive number of end multiplication : ";
	cin>>k;
	for(i=1;i<=k;i++)
	{
		cout<<n<<"*"<<i<<"=" <<n*i <<endl;
		
	}
	return 0;
}
