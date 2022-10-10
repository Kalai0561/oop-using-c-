#include<iostream>
using namespace std;
int main()
{
	int i,n,a[10],sum=0;
	cout<<"enter the numbers you give : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter the number : ";
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<"the sum of the array is : "<<sum;
	return 0;
}
