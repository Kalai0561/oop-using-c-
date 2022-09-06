#include<iostream>
using namespace std;
int main()
{
	int i,sum=0;
    cout<<"the first 10 natural numbers are : "<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<i<<endl;
		sum+=i;
		
	}
	cout<<"the sum of the 1st natural numbers are : "<<sum<<endl;
	return 0;
}
